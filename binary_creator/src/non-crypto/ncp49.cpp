#include <iostream>
using namespace std;

int main() {
    int arr[] = {5, 10, 15, 20};
    double sum = 0;
    for (int x : arr) sum += x;
    cout << "Average: " << sum / 4 << endl;
}
