#include <iostream>
using namespace std;

void rozklad(int n) {
    int k = 2;
    
    while (n > 1) {
        while (n % k == 0) {
            cout << k << ", ";
            n = n/k;
        }
        k = k + 1;
    }
    cout << endl;
}

int main(){
    int liczba;
    cout << "Podaj liczbe: ";
    cin >> liczba;
    cout << "Czynniki pierwsze liczby " << liczba << ": ";
    rozklad(liczba);
    return 0;
    
}