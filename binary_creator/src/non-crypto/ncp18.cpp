#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40, 50};
    double sum = 0;
    for (int x : v) sum += x;
    cout << "Average = " << sum / v.size() << endl;
}
