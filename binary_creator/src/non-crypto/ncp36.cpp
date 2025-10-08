#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int binaryToDecimal(string bin) {
    int val = 0;
    for (size_t i = 0; i < bin.size(); i++)
        val = val * 2 + (bin[i] - '0');
    return val;
}

int main() {
    cout << binaryToDecimal("101010") << endl;
}
