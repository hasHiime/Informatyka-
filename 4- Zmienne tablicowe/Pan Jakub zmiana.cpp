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

int zmienna;
cout << "Podaj operatora";
cin >> zmienna;

switch( zmienna )
{
case '+':
    cout << liczba + liczba2;
    break;
   
case '-':
    cout << liczba - liczba2;
    break;
   
case '*':
    cout << liczba * liczba2;
    break;
    
case '/':
    cout << liczba / liczba2;
    break;
   

}
return 0;
}
