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
    (years >= 18 && is_admin) ? cout << "you can pass\n" : (
        cout << "access denied\n"
        years < 18 ? cout << "you are not adult\n" : cout << ""
        admin == "no" ? cout << "you not admin\n" : (
            admin != "yes" ? cout << "invalid input try again\n" : cout << "")
        );

    return 0;
    
}

