#include <iostream>
#include <cstring>
using namespace std;

void encrypt(char *text, int shift) {
    for (int i = 0; text[i] != '\0'; i++) {
        text[i] = (text[i] + shift) % 128;
    }
}

void decrypt(char *text, int shift) {
    encrypt(text, 128 - (shift % 128));
}

int main() {
    char text[100];
    int shift;

    cout << "Enter text: ";
    cin.getline(text, sizeof(text));

    cout << "Enter shift (1-127): ";
    cin >> shift;

    if (shift < 1 || shift > 127) {
        cout << "Shift must be between 1 and 127." << endl;
        return 1;
    }

    encrypt(text, shift);
    cout << "Encrypted text: ";
    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i];
    }
    cout << endl;

    decrypt(text, shift);
    cout << "Decrypted text: ";
    for (int i = 0; text[i] != '\0'; i++) {
        cout << text[i];
    }
    cout << endl;

    return 0;
}
