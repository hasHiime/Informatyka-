#include <iostream>
using namespace std;
	
	int Suma(int a, int b){
		return a+b;
	}
	float Suma(float c, float d){
		return c+d;
		}
		
	double Suma(int a, float c){
		return a+c;
	}
	double Suma(float c, int b ){
		return c+b;
	}
	
	int main()
	{
		int a,b;
		float c,d;
		char opcja;
		
		cout<<"Wybierz opcje: " << endl;
		cout<<"1 - Liczba calkowita+calkowita " << endl;
		cout<<"2 - Liczba przecinkowa+przecinkowa " << endl;
		cout<<"3 - Liczba calkowita+przecinkowa " << endl;
		cout<<"4 - Liczba przecinkowa+calkowita " << endl;
		cin>>opcja;
		
		switch(opcja)
		{
			case '1' :
				cout << "Podaj liczbe: " ; cin >> a;
				cout << "Podaj liczbe: " ; cin >> b;
				cout << "Suma dodawania wynosi: " << Suma(a,b)<<endl;
				break;
			
			case '2' : 
			
				cout << "Podaj liczbe: " ; cin >> c;
				cout << "Podaj liczbe: " ; cin >> d;
				cout << "Suma dodawania wynosi: " << Suma(c,d)<<endl;
				break;
				
			case '3' : 
			
				cout << "Podaj liczbe: " ; cin >> a;
				cout << "Podaj liczbe: " ; cin >> c;
				cout << "Suma dodawania wynosi: " << Suma(a,c)<<endl;
				break;
			
			case '4' : 
			
				cout << "Podaj liczbe: " ; cin >> c;
				cout << "Podaj liczbe: " ; cin >> b;
				cout << "Suma dodawania wynosi: " << Suma(c,b)<<endl;
				break;
			
			default: cout<< "Wybrałeś nieprawidłową opcje! "<< endl;
		}
		
				
		return 0;
		
	}