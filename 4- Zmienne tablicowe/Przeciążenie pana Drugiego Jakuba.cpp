#include <iostream>
using namespace std;
	
	int Suma(int a){
		return a;
	}
	float Suma(float b){
		return b;
		
	}
	int Suma2(int c){
		return c;
	}
	float Suma2(float d){
		return d;
	}
	
	int main()
	{
		int a;
		float b;
		char opcja;
		
		cout<<"Wybierz opcje: " << endl;
		cout<<"1 - Liczba calkowita " << endl;
		cout<<"2 - Liczba przecinkowa " << endl;
		
		cin>>opcja;
		
		switch(opcja)
		{
			case '1' :
				cout << "Podaj liczbe: " ; cin >> a;
				cout << "Podales liczbe: " << Suma(a)<<endl;
				break;
			
			case '2' : 
			
				cout << "Podaj liczbe: " ; cin >> b;
				cout << "Podales liczbe: " << Suma(b)<<endl;
				break;
				
			
			case '3' :
				cout << "Podaj liczbe: " ; cin >> c
				cout << "Wynik dodawania to: " <<Suma2(c+a)<<endl;
				break;
				
			case '4' :
				cout << "Podaj liczbe: " ; cin >> d
				cout << "Wynik dodawania to: " <<Suma2(d+a) <<endl;
				break;
				
			
			default: cout<< "Wybrałeś nieprawidłową opcje! "<< endl;
		}

		
		return 0;
		
	}