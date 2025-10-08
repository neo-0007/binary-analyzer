#include <iostream>
using namespace std;

int sumN(int n) {
    if (n == 0) return 0;
    return n + sumN(n - 1);
}

int main() {
    cout << "Sum of first 10 numbers: " << sumN(10) << endl;
}
