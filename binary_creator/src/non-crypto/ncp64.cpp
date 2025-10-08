#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 3, 5};
    vector<int> b = {2, 4, 6};
    vector<int> c;
    c.insert(c.end(), a.begin(), a.end());
    c.insert(c.end(), b.begin(), b.end());
    for (int x : c) cout << x << " ";
}
