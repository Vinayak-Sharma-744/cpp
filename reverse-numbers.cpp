#include <iostream>
using namespace std;

int main()
{
    int n, a, b;
    cout << "enter no. to reverse it" << endl;
    cin >> n;

  b = 0 ;
  while ( n > 0)
  {
       a = n % 10;
       b = a + (b * 10);
       n = n/10;
  }
    cout << b << endl;
    return 0;
}
