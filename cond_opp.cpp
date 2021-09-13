#include <iostream>
using namespace std;

int main()
{

    int age;
    cout << "enter your age ";
    cin >> age;

    if (age >= 18)
    {
        cout << "you can vote";
    }
    else if (age > 100 || age < 1)
    {
        cout << "invalid age";
    }
    else
    {
        cout << "you cannot vote";
    }

    return 0;
}
