#include <iostream>
using namespace std;

int main() {
    int n = 6; long long fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    cout << fact << endl;
}
