#include <iostream>
using namespace std;

struct farma{
	
	string Nazwa;
	int Waga;
	int Wiek;
	
};
int main(){
	
farma zwierzeta[5];
cout << "Wprowadz zwierzeta.\n ";
for (short i=0; i<5; i++){
	cout << "Podaj nazwe: ";
	cin >> zwierzeta[i].Nazwa;
	cout << "Podaj Wage(gram): ";
	cin >> zwierzeta[i].Waga;
	cout << "Podaj Wiek: ";
	cin >> zwierzeta[i].Wiek;
}
cout << "Wprowadzone informatcje to: " << endl;
for(short i=0; i<5; i++){
	
	cout << "zwierzeta" << i+1
	<< "\tNazwa: " << zwierzeta[i].Nazwa
	<< "\tWaga: " << zwierzeta[i].Waga
	<< "\tWiek: " << zwierzeta[i].Wiek
	<< endl;
	
}

return 0;
}
