// just used function for practice

#include <iostream>
using namespace std;

void star(int n)
{
     n = 5;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            cout << (n - (n - i));
        }
        cout << endl;
    }
    
}

int main()
{
    int i;
    cin>>i;
    star(i);
    return 0;
}