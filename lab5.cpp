#include <iostream>
#include <cstring>
using namespace std;

void runLengthEncode(const char *input, char *output) {
    int count;
    int i, j = 0;
    int length = strlen(input);

    for (i = 0; i < length; i++) {
        count = 1;
        while (i + 1 < length && input[i] == input[i + 1]) {
            count++;
            i++;
        }
        j += sprintf(&output[j], "%c%d", input[i], count);
    }
    output[j] = '\0';
}

int main() {
    const char *input = "aaabbbccdaa";
    char output[100]; // Ensure this is large enough to hold the output

    runLengthEncode(input, output);
    cout << "Input: " << input << endl;
    cout << "Encoded: " << output << endl;

    return 0;
}
