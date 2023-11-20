#include <iostream>
using namespace std;

int main(){

 // petla while
    // while( warunek_zakonczenia){ nasz kod ktory ma sie powtarzac }
    short licznik = 30;
    while(licznik > 0){
        cout << licznik << ", ";
        licznik--;
    }
    cout << endl << endl;

    // petla for
    for(short i = 30; i >0; i--){
        cout << i << ", ";
    }

    // inny przyklad petli while
    short liczbaWprowadzana = 0;
    while( liczbaWprowadzana != 5){
        cout << "Podaj liczbe: ";
        cin >> liczbaWprowadzana;
    }
    
    // petla do...while
    short liczba;
    do{
        cout << "Podaj liczbe: ";
        cin >> liczba;
    }while(liczba != 5);


cout << endl;
system("pause");
}