#include <iostream>
using namespace std;

long long fact(int n) {
    return (n <= 1) ? 1 : n * fact(n - 1);
}

int main() {
    int n = 6, r = 3;
    cout << "nPr = " << fact(n) / fact(n - r) << endl;
}
