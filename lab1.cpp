#include <iostream>
using namespace std;

int dev(int a, int b) {
    a = (a < 0) ? -a : a;
    b = (b < 0) ? -b : b;

    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

int main() {
    int num1, num2;

    cout << "Mutqagreq tvery: ";
    cin >> num1 >> num2;

    int result = dev(num1, num2);

    cout << num1 << "-i ev " << num2 << "-i amenamec yndhanur bajanarary " << result << "-n e" << endl;

    return 0;
}
