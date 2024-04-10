#include <iostream>
using namespace std;

int SumTab(int tab[]){
	const int SIZE = 5;
	int sum = 0;
	for (int i=0; i < 5; ++i){
		sum += tab[i];
	
	}
	return sum;
}
	int main(){
		int tab[5];
		cout <<"Podaj 5 liczb, ktore nalezy zsumowac: " << endl;
		for(int i=0; i<5; ++i){
			cin >> tab[i];
		}
		cout << "Suma liczb: " << SumTab(tab) << endl;
		
		return 0;
	}
