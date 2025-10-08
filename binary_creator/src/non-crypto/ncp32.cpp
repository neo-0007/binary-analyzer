#include <iostream>
using namespace std;

bool isLeap(int year) {
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

int main() {
    int y = 2024;
    cout << (isLeap(y) ? "Leap Year" : "Not Leap Year") << endl;
}
