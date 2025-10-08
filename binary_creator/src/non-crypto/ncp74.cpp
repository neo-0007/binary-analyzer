#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {4, 1, 3, 9, 7};
    sort(v.begin(), v.end());
    for (int x : v) cout << x << " ";
}
