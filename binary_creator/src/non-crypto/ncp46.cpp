#include <iostream>
#include <vector>
using namespace std;

void bubble(vector<int>& a, int n) {
    if (n == 1) return;
    for (int i = 0; i < n - 1; i++)
        if (a[i] > a[i + 1]) swap(a[i], a[i + 1]);
    bubble(a, n - 1);
}

int main() {
    vector<int> a = {5, 3, 8, 4, 2};
    bubble(a, a.size());
    for (int x : a) cout << x << " ";
}
