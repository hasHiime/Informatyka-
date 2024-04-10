#include <iostream>
using namespace std;

struct INF
{

string nazwa;
short wiek;
string haslo;

};
int main(){
	
	INF uzytkownicy[4];
	cout << "Wprowadz dane: " << endl;
	for(short i = 0; i<4; i++) {
		cout << "Podaj nazwe: ";
		cin >> uzytkownicy[i].nazwa;
		cout << "Podaj wiek: ";
		cin >> uzytkownicy[i].wiek;
		cout << "Podaj haslo: ";
		cin >> uzytkownicy[i].haslo;
		
	}
	
	cout << endl;
	cout << "Wprowadziles: "
	<< endl; 
	for (short i = 0; i < 4; i++){
		cout << "Uzytkownik " << i + 1
		<< " nazwa: " << uzytkownicy[i].nazwa 
		<< " wiek: " << uzytkownicy[i].wiek
		<< " haslo: " << uzytkownicy[i].haslo
		<<endl;
		
	}
	
	
	
	
}