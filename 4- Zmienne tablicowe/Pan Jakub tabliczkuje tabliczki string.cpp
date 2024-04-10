#include<iostream>
using namespace std;

int main()
{
    long a;
    cout << "Podaj imie i nazwisko";
    cin >> a;
	char tab[] = {a, '\0'};
    cout<< a <<endl;

    return 0;
}