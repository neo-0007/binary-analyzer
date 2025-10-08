#include <iostream>
using namespace std;

long long fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}

int main() {
    int n = 10;
    cout << "Factorial of " << n << " = " << fact(n) << endl;
}