#include <iostream>
using namespace std;

int binary_search(int h, int key, int arr[])
{
    int s = 0;
    int e = h;
    

    while (s <= e)
    {
       int mid = (s + e) / 2;

        if (arr[mid] == key)
        {
            return mid;
        }
        else if (arr[mid] > key)
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main(void)
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
    cout << binary_search(n,key,arr)<<endl;
    return 0;
}