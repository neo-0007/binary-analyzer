#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s = "Hello this is a test string";
    string word;
    int count = 0;
    stringstream ss(s);
    while (ss >> word) count++;
    cout << "Word count: " << count << endl;
}
