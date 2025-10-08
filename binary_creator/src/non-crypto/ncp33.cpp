#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main() {
    string s = "Hello World";
    int v = 0, c = 0;
    for (char ch : s) {
        ch = tolower(ch);
        if (isalpha(ch))
            (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') ? v++ : c++;
    }
    cout << "Vowels: " << v << " Consonants: " << c << endl;
}
