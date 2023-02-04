/* Owen Cramer
 * FRCC CSC2034
 * February 5, 2023
 * Write a program named changeMachine that, given a number of pennies, prints the minimum number
 * of coin denominations in dollars, half-dollar, quarters, dimes, nickels, and pennies. Use the
 * conditional expression (?:) to print only nonzero numbers of each coin.
 */

#include <iostream>
using namespace std;

int main() {
    int dollar = 0, hfDollar = 0, quarter = 0, dime = 0, nickel = 0, penny = 0;
    int input;

    cout << "Enter the amount of pennies you have: ";
    cin >> input;

    dollar = input >= 100 ? (input / 100) : dollar;
    input = input - (dollar * 100);

    hfDollar = input >= 50 ? input / 50 : hfDollar;
    input = input - (hfDollar * 50);

    quarter = input >= 25 ? input / 25 : quarter;
    input = input - (quarter * 25);

    dime = input >= 10 ? input / 10 : dime;
    input = input - (dime * 10);

    nickel = input >= 5 ? input / 5 : nickel;
    input = input - (nickel * 5);

    penny = input;

    cout << "Dollar(s): " << dollar << "\n";
    cout << "Half Dollar: " << hfDollar << "\n";
    cout << "Quarter(s): " << quarter << "\n";
    cout << "Dime(s): " << dime << "\n";
    cout << "Nickel(s): " << nickel << "\n";
    cout << "Pennies: " << penny << "\n";

    return 0;
}
