#include <iostream>
using namespace std;

int main() {
    string password;
    int score = 0;

    cout << "Enter password: ";
    cin >> password;

    // Length check
    if (password.length() >= 8) {
        cout << "✔ Good length\n";
        score++;
    } else {
        cout << "✖ Too short\n";
    }

    bool upper = false, lower = false, digit = false, symbol = false;

    for (int i = 0; i < password.length(); i++) {
        char c = password[i];

        if (c >= 'A' && c <= 'Z')
            upper = true;
        else if (c >= 'a' && c <= 'z')
            lower = true;
        else if (c >= '0' && c <= '9')
            digit = true;
        else
            symbol = true;
    }

    if (upper) { cout << "✔ Uppercase letter\n"; score++; }
    else cout << "✖ No uppercase letter\n";

    if (lower) { cout << "✔ Lowercase letter\n"; score++; }
    else cout << "✖ No lowercase letter\n";

    if (digit) { cout << "✔ Number\n"; score++; }
    else cout << "✖ No number\n";

    if (symbol) { cout << "✔ Symbol\n"; score++; }
    else cout << "✖ No symbol\n";

    cout << "\nPassword Strength: ";
    if (score <= 2)
        cout << "Weak\n";
    else if (score <= 4)
        cout << "Medium\n";
    else
        cout << "Strong\n";

    return 0;
}
