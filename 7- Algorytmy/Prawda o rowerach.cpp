#include <iostream>

using namespace std;

int main( )
{
  unsigned int n, lp, p, d;
  bool t;

  cout << "Ile liczb pierwszych chcesz wyswietlic: ";
  cin >> n;
  lp = 0;
  p  = 2;
  cout << "Liczby pierwsze: ";
  while( lp < n )
  {
    t = true;
    for( d = 2; d < p; d++ ){
      if( p % d == 0 )
      {
        t = false;
 
      }
    }
    if( t )
    {
        cout << p << ", ";
        lp++;
    }
    p++;
  }
  cout << endl;
  return 0;
} 