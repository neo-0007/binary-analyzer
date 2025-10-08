#include <iostream>
using namespace std;

int main() {
    int n = 12345, sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    cout << "Sum: " << sum << endl;
}
