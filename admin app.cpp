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
    bool is_admin = admin == "yes";
    if (years >= 18 and is_admin) {
        cout << "you can pass\n";
    }
    else {
        cout << "access denied\n";
        if (years < 18) {
            cout << "you are not adult\n";
        }

        if (admin == "no") {
            cout << "you not admin\n";
        }
        else if (admin != "yes") {
            cout << "invalid input try again\n";
        }
    }
}

