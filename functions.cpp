#include <iostream>
using namespace std;

int add(int a, int b)
{
    int c;
    c = a + b;
    return c;
}

int main()
{

    int x,y;
    cout << "enter first number" << endl;
    cin >> x;

    cout << "enter second number" << endl;
    cin >> y;

    cout << "the function returned " << add(x,y);
    

    int b,c;
    cout << "enter first number" << endl;
    cin >> b;

    cout << "enter second number" << endl;
    cin >> c;

    cout << "the function returned " << add(b,c);
    return 0;

}