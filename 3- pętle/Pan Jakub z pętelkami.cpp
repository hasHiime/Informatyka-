#include <iostream>
using namespace std;

int main() {






cout << "Podaj wysokość: " << endl;	
int a;
cin >> a;
cout << "Podaj szerokość: " << endl; 
int b;
cin >> b;

	for(int i=0; i < a; i++) {
		for(int j=0; j < b; j++) {
			if(i == 0 || i == a-1)
				cout <<" * ";
			else if(j == 0 || j == b-1)
				cout << "*";
			else 
				cout << " ";
		}
		cout << endl;


		}
		system("pause");
	}
	
/*

 int szerokosc, wysokosc;
   cout << "Podaj szerokosc: " << endl;
   cin >> szerokosc;
   cout << "Podaj wysokosc: " << endl;
   cin >> wysokosc;

    for(int i=0; i < wysokosc; i++){
        for(int j=0; j < szerokosc; j++){
            if(i == 0 || i == wysokosc-1)
                cout <<"*";
            else if(j == 0 || j == szerokosc-1)
                cout << "*";
            else 
                cout << " ";
        }
        cout << endl;
    }

    
}

*/