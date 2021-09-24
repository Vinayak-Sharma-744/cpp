// just a key point to remember, always use i < n with arrays bcs it helps to denote correct index value..

#include <iostream>
using namespace std;

int linearSearch(int key, int arr[], int n)
{

    for (int i = 0; i < n; i++)
    {
        if (key == arr[i])
        {
            return i;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int key;
    cin >> key;

    cout << linearSearch(key, arr, n) << endl;

    return 0;
}