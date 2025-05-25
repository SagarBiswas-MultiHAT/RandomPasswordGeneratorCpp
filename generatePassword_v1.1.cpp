#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

string generatePassword(int length) {
    const string characters =
        "abcdefghijklmnopqrstuvwxyz"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "0123456789"
        "!@#$%^&*()-_=+[]{}|;:,.<>?";
    string password;
    srand(time(0));

    for (int i = 0; i < length; i++) {
        password += characters[rand() % characters.size()];
    }

    return password;
}

int main() {

    cout << "\n\t..:: PASSWORD GENERATOR ::..\n\n" << endl;
    int length;
    cout << "..:: Enter the length of the password\t: ";
    cin >> length;

    string password = generatePassword(length);
    cout << "\n==> Generated Password\t\t\t: " << password << endl;

    return 0;
}
