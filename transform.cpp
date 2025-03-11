#include <iostream>
using namespace std;

void transform(int n) {
    if (n == 0) {
        return;
    } else {
        transform(n / 2);

        cout << n % 2;
    }

}

int main() {
    int value = 20;

    if (value == 0) {
        cout << "0";
    } else {
        transform(value);
    }

    cout << endl;

    return 0;
}