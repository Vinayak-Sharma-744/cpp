#include <iostream>
using namespace std;

int swap(int x, int y)
{

  x = x + y;
  y = x - y;
  x = x - y;


  cout << "first no. became " << x << endl;
  cout << "second no. became " << y << endl;
  return 0;
}

int main()

{
  int a, b;

  cout << "enter first no. " << endl;
  cin >> a;

  cout << "enter second no. " << endl;
  cin >> b;


  cout << " the given nos. are swaped " << endl;
  cout <<endl;
  cout << swap(a, b)<<endl;

}