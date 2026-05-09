/*
Problem 8: Smartphone Unlock
Write a program that repeatedly asks for a passcode.
Use do-while loop and unlock only when correct passcode is entered.
*/

#include <iostream>
using namespace std;

#include <iostream>
using namespace std;

int main() {
    string passcode;
    string correct = "1234";

    while (true) {
        cout << "Enter passcode: ";
        cin >> passcode;

        if (passcode == correct) {
            cout << "Access granted\n";
            break;   // exits loop
        } else {
            cout << "Incorrect Passcode. Try Again.\n";
        }
    }

    return 0;
}