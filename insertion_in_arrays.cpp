#include<iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    n++;

    int digit;
    cin>>digit;

    int pos ;
    cin>>pos;

    for (int i = n; i >= pos; i--)
    {
        arr[i]  = arr[i - 1];
    }
    arr[pos] = digit;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    
    
    return 0;
}