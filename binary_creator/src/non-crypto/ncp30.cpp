#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n, digits = log10(n) + 1;
    while (temp) {
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    cout << (isArmstrong(153) ? "Yes" : "No") << endl;
}
