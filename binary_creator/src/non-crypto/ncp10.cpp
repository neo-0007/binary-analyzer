#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "madam";
    bool ok = true;
    for (size_t i = 0; i < s.size() / 2; i++)
        if (s[i] != s[s.size() - i - 1]) ok = false;
    cout << (ok ? "Palindrome" : "Not Palindrome") << endl;
}