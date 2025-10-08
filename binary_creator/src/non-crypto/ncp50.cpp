#include <iostream>
using namespace std;

void swapNums(int& a, int& b) {
    int temp = a; a = b; b = temp;
}

int main() {
    int x = 10, y = 20;
    swapNums(x, y);
    cout << x << " " << y << endl;
}
