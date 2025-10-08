#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& v, int l, int r, int key) {
    if (l > r) return -1;
    int mid = (l + r) / 2;
    if (v[mid] == key) return mid;
    if (v[mid] > key) return binarySearch(v, l, mid - 1, key);
    return binarySearch(v, mid + 1, r, key);
}

int main() {
    vector<int> v = {2,4,6,8,10};
    cout << binarySearch(v, 0, v.size()-1, 8) << endl;
}
