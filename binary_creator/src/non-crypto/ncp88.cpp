#include <iostream>
#include <string>
using namespace std;

int main() {
    string s = "Hello World";
    int count = 0;
    for (char c : s)
        if (string("aeiouAEIOU").find(c) != string::npos)
            count++;
    cout << "Vowels: " << count << endl;
}
