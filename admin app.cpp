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
    else if (years < 18 and admin == "yes") {
        cout << "you are admin but no adult";
        cout << "you cant pass";
    }
    else if (years >= 18 and admin == "no") {
        cout << "you are adult but no admin";
    }
    else if (years >= 18 and admin != "no" and admin != "yes") {
        cout << "you dont have access beacose you are typing a invalid input";
    }
    else if (years < 18 and admin != "no" and admin != "yes") {
        cout << "lil kid dont joke";
    }
}

