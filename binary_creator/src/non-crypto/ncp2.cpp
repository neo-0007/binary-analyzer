#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30;
    bool found = false;
    for (int x : arr) if (x == key) found = true;
    cout << (found ? "Found" : "Not Found") << endl;
    return 0;
}