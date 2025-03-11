#include <iostream>
using namespace std;

void addBinary(int a, int b) {
    cout << "Addition: " << (a + b) << endl;
}

void subBinary(int a, int b) {
    cout << "Subtraction: " << (a - b) << endl;
}

void leftShift(int a) {
    cout << "left Shift: " << (a << 1) << endl;
}

void rightShift(int a) {
    cout << "right Shift: " << (a >> 1) << endl;
}

int main() {
    int a = 20;
    int b = 21;

    addBinary(a, b);
    subBinary(a, b);
    leftShift(a);
    rightShift(a);
}