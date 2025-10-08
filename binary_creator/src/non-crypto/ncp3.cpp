#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> v = {1, 3, 5, 7, 9};
    int key = 7;
    int l = 0, r = v.size() - 1;
    bool found = false;
    while (l <= r) {
        int mid = (l + r) / 2;
        if (v[mid] == key) { found = true; break; }
        else if (v[mid] < key) l = mid + 1;
        else r = mid - 1;
    }
    cout << (found ? "Found" : "Not Found") << endl;
}
