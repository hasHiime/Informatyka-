
#include <iostream>
using namespace std;
int main() {



    int liczba[5];
    for (int i = 0; i < 5; i++)
    {
        cin >> liczba[i];
    }

    cout << "Podales nastepujace liczby: ";
    for (int i = 0; i < 5; i++)
        if (liczba[i] >= 0) {
            cout << liczba[i] << ", ";
        }
        else{
            cout << 0;
        }
        
      

    

}