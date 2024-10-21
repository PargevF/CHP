#include <iostream>
#include <cstring>
using namespace std;

void encode(char l[]) {
    char a[27] = "abcdefghijklmnopqrstuvwxyz";
    char b[27] = "qwertyuiopasdfghjklzxcvbnm";

    int k = strlen(l);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 26; j++) {
            if (l[i] == a[j]) {
                l[i] = b[j];
                break;
            }
        }
    }
}

void decode(char l[]) {
    char a[27] = "abcdefghijklmnopqrstuvwxyz";
    char b[27] = "qwertyuiopasdfghjklzxcvbnm";

    int k = strlen(l);
    for (int i = 0; i < k; i++) {
        for (int j = 0; j < 26; j++) {
            if (l[i] == b[j]) {
                l[i] = a[j];
                break;
            }
        }
    }
}

int main() {
    char c[100];
    cout << "Enter the text: ";
    cin.getline(c, sizeof(c));

    encode(c);
    cout << "Encoded: " << c << endl;

    decode(c);
    cout << "Decoded: " << c << endl;

    return 0;
}
