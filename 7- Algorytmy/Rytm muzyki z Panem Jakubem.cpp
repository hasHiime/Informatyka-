#include <iostream>
using namespace std;

int main(){
	int tab[25] = {2, 3, 5, 7, 11, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47, 2, 3, 5, 7, 11, 31, 37, 41, 43, 47};
	int szukana;
	int liczby[25];
	int index = 0;

cout << "Jaka liczbe poszukujesz: "; 
cin >> szukana;

	for(int i=0; i < sizeof(tab); i++ ){
		if(tab[i] == szukana){
			liczby[index] = i;
			index++;
		}
		
	}
	
	cout << "Poszukiwana liczba znajduje sie na pozycji: " << endl;
	for(int i = 0; i < index; i++){
		cout << liczby[i] << " ";
		
	}
	
}