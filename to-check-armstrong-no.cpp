// in this code just use a variable to store the value of i such as :- original_i

#include <iostream>
using namespace std;
int main()
{
    int i, a, b, c;

    cout << "enter no." << endl;
    cin >> i;

    c = 0;
    int original_i = i;
    while (i > 0)
    {
        a = i % 10;
        b = a * a * a;
        c = b + c;
        i = i / 10;
    }
    if (original_i == c)
    {
        cout << "given no. is an armstrong no." << endl;
    }
    else
    {
        cout << "given no. is not an armstrong no." << endl;
    }

    return 0;
}