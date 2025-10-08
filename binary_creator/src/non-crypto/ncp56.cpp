#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double p = 1000, r = 5, t = 2;
    double ci = p * pow((1 + r / 100), t) - p;
    cout << "Compound Interest: " << ci << endl;
}
