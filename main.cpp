#include <iostream>
using namespace std;


/*
 * Ben's Carpet Cleaning Service 
    Charges: 
        $25 per small room 
        $35 per large room 
    Sales tax rate is 6% 
    Estimates are valid for 30 days 
     * 
     * 
    Prompt the user for the number of small and large rooms they would like cleaned 
    and provide an estimate such as: 
     * 
     * 
    Estimate for carpet cleaning service 
    Number of small rooms: 3 
    Number of large rooms: 1 
    Price per small room: $25 
    Price per large room: $35 
    Cost : $110 
    Tax: $6.6 
     * =========================
    Total estimate: $116.6 
    This estimate is valid for 30 days 
     * 
     */

int main()
{
    int small_rooms;
    int large_rooms;
    int subtotal;
    double total;
    const int small_room_price {25};
    const int large_room_price {35};
    const double tax {0.06};
    const int estimated_expiry {30};

    cout << "Number of small rooms:";
    cin >> small_rooms;

    cout << "Number of large rooms:";
    cin >> large_rooms;

    cout << "Price per small room: $" << small_room_price << endl;
    cout << "Price per large room: $" << large_room_price << endl;

    subtotal = small_rooms * small_room_price + large_rooms * large_room_price;
    cout << "Cost: " << subtotal << endl;

    cout << "Tax: " << subtotal * tax << endl;

    total = (subtotal * tax) + subtotal;
    cout << " * =========================" << endl;
    cout << "Total estimate: " << total << endl;
    cout << "This estimate is valid for " << estimated_expiry << " days";

}