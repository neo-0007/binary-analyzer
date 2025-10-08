#include <iostream>
using namespace std;

int gcd(int a, int b) { return b ? gcd(b, a % b) : a; }

int main() {
    int a = 12, b = 18;
    cout << "LCM = " << (a * b) / gcd(a, b) << endl;
}
