#include <iostream>
using namespace std;

int main()
{
    int i, j;

    cout << "enter the no. of rows and column " << endl;
    cin >> i >> j;

    for (int n = 0; n < i; n++)
    {
        for (int m = 0; m < j; m++)
        {
            cout << "*";
        }
        cout << endl;
    }

    return 0;
}