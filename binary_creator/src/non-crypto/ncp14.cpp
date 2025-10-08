#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 2, 4, 1};
    set<int> seen, dup;
    for (int x : arr)
        if (!seen.insert(x).second) dup.insert(x);
    for (int d : dup) cout << d << " ";
}