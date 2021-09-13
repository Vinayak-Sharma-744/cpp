#include <iostream>

using namespace std;

int main()
{
    int number_of_rooms;
    cout << "Hello , welcome to the lawrence room cleaning services . " << endl;
    cout << "Price per small  room : $25" << endl;
    cout << "Price per large room : $35" << endl;
    cout << "How many rooms you want to get cleaned ? " << endl;

    cout << "total number of rooms ";
    cin >> number_of_rooms;
    

    cout << "no of small rooms ";
    int small_rooms;
    cin >> small_rooms;

    cout << "no of large rooms ";
    int large_rooms;
    cin >> large_rooms;

    if (number_of_rooms == small_rooms + large_rooms)
    {
        cout << "\nCost : $" << (small_rooms * 25) + (large_rooms * 35);
        int cost = (small_rooms * 25) + (large_rooms * 35);

        cout << "\nTax : $ " << (cost * 0.06);

        cout << "\n\n************";

        float tax = cost * 0.06;
        cout << endl;

        cout << "\nTotal cost : $ " << cost + tax;
        cout << "\n\n************";

        cout << "\nThis estimate value is applicable for 30 days only ";

        cout << "\nThank You " << endl;
    }
    else
    {
        cout << "invalid data";
    }

    return 0;
}