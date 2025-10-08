#include <iostream>
#include <sstream>
#include <string>
using namespace std;

int main() {
    string s = "This is a sample line";
    string word;
    stringstream ss(s);
    int count = 0;
    while (ss >> word) count++;
    cout << "Words: " << count << endl;
}
