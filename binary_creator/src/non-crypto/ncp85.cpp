#include <iostream>
using namespace std;

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int key = 30, pos = -1;
    for (int i = 0; i < 5; i++)
        if (arr[i] == key) pos = i;
    cout << "Found at: " << pos << endl;
}
