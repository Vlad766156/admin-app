#include <iostream>
using namespace std;

int main()
{
    string admin;
    int years;
    cout << "how old are you?\n";
    cin >> years;
    cout << "are you admin?\n";
    cin >> admin;
    if (years >= 18 and admin == "yes") {
        cout << "you can pass";
    }
    else {
        if (years < 18) {
            cout << "you are not adult";
        }

        if (admin == "no") {
            cout << "you not admin";
        }
        else if (admin != "yes") {
            cout << "invalid input try again";
        }

    }
}

