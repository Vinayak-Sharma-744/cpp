#include <iostream>
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

    int index;
    cout<<'enter the index where you want to delete the element'<<endl;
    cin >> index;

    for (int i = index; i < n-1; i++)
    {
        arr[i] = arr[i + 1];
        
    }
    n -= 1;

    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}