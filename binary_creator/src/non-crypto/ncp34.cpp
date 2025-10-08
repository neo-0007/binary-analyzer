#include <iostream>
using namespace std;

long long power(int base, int exp) {
    if (exp == 0) return 1;
    return base * power(base, exp - 1);
}

int main() {
    cout << power(2, 10) << endl;
}
