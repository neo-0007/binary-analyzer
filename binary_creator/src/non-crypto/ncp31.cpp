#include <iostream>
using namespace std;

int main() {
    int a = 10, b = 25, c = 15;
    int maxVal = (a > b) ? ((a > c) ? a : c) : ((b > c) ? b : c);
    cout << "Greatest: " << maxVal << endl;
}
