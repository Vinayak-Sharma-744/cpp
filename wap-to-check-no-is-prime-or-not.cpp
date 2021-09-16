// in this code we have to use bool flag to make another "if statement"  using condition flag in it  & this is also the function of bool
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n;
    bool flag = 0;

    cout << "enter no. to check whether it's prime or not" << endl;
    cin >> n;

    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            cout << "no. is not prime" << endl;
            flag = 1;
            break;
        }
        if (flag == 0)
        {
            cout << "no. is prime" << endl;
        }
    }

    return 0;
}