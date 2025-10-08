#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "banana";
    char target = 'a';
    int count = 0;
    for (char c : s) if (c == target) count++;
    cout << "Occurrences: " << count << endl;
}
