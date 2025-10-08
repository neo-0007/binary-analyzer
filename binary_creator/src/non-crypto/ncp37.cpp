#include <iostream>
using namespace std;

long long fact(int n) {
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main() {
    int n = 5, r = 2;
    cout << "nCr = " << fact(n) / (fact(r) * fact(n - r)) << endl;
}
