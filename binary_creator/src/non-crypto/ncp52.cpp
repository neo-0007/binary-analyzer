#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string& s) {
    int l = 0, r = s.size() - 1;
    while (l < r)
        if (s[l++] != s[r--]) return false;
    return true;
}

int main() {
    string str = "madam";
    cout << (isPalindrome(str) ? "Palindrome" : "Not Palindrome") << endl;
}
