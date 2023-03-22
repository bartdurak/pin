#include <iostream>

using namespace std;
string PIN;
int main() {
    cout << "Witamy w Banku " << endl;
    cout << "Podaj numer PIN: ";
    cin >> PIN;

    if (PIN == "1722") {
        cout << "Pin poprawny";

    }

    return 0;
}
