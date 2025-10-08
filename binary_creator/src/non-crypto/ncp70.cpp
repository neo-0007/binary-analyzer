#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n;
    int digits = 0;
    int t = n;
    while (t) { digits++; t /= 10; }
    while (n) {
        int r = n % 10;
        sum += pow(r, digits);
        n /= 10;
    }
    return sum == temp;
}

int main() {
    cout << (isArmstrong(153) ? "Armstrong" : "Not Armstrong") << endl;
}
