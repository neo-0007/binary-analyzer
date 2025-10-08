#include <iostream>
using namespace std;

int countDigits(int n) {
    int c = 0;
    while (n) { c++; n /= 10; }
    return c;
}

int main() {
    cout << countDigits(12345) << endl;
}
