#include <iostream>
using namespace std;

int main() {
    int arr[] = {2, 5, 8, 7, 10, 3};
    int even = 0, odd = 0;
    for (int x : arr)
        (x % 2 == 0) ? even++ : odd++;
    cout << "Even: " << even << ", Odd: " << odd << endl;
}
