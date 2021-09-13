#include <iostream>
using namespace std;

int main()
{
    int i, j;

    cout << "enter the no. of rows and column " << endl;
    cin >> i >> j;

    for (int n = 1; n <= i; n++)
    {

        for (int m = 1; m <= j; m++)
        {
            if (m == 1 || m == j || n == 1 || n == i)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}