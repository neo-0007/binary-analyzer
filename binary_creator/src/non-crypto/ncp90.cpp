#include <iostream>
using namespace std;

int main() {
    double a = 10, b = 5;
    char op = '+';
    switch (op) {
        case '+': cout << a + b; break;
        case '-': cout << a - b; break;
        case '*': cout << a * b; break;
        case '/': cout << a / b; break;
        default: cout << "Invalid operator";
    }
}
