#include <iostream>
using namespace std;
int main()
{
    int x;

    cin >> x;
    if (x >0)
    {
        if (x %2 == 0)
        {
            cout<<"even";
        }
        if (x%2 != 0)
        {
            cout<<"odd";
        }
        
    }
    if (x<0)
    {
        cout<<"negative";
    }
    if (x==0)
    {
        cout<<"zero";
    }
    
    
    return 0;
}