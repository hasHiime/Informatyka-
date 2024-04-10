#include <iostream>
using namespace std;

int main()
{

    float liczba;
    float liczba2;
    float liczba3;
    cout << "Podaj liczbe";
    cin >> liczba;
    cout << "Podaj druga liczbe";
    cin >> liczba2;

    char zmienna;
    cout << "Podaj operatora";
    cin >> zmienna;

    switch (zmienna)
    {
    case '+':
        cout << "Wynik dodwania to " << liczba + liczba2;
        break;

    case '-':
        cout << "Wynik odejmowania to " << liczba - liczba2;
        break;

    case '*':
        cout << "Wynik mno¿enia to " << liczba * liczba2;
        break;

    case '/':
        cout << "Wynik dzielenia to " << liczba / liczba2;
        break;


    }
    return 0;
}
