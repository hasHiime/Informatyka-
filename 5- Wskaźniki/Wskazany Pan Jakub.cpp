#include <iostream>
using namespace std;
int main()
{
int n = 3;
int *wsk = &n; 

*wsk = 666;

cout << "Adres zmiennej n: " << *wsk << endl;

	
	
}