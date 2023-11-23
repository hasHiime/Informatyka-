

#include <iostream>
using namespace std;
int main(){

    short a = 30;
    while (a >= 10) {
        cout << a << ", ";
        a -= 2;
    }
    float liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    do {
        cout << liczba << ", ";
        liczba = liczba / 2;
    }while(liczba > 0);
    cout << endl;
    system("pause");
}