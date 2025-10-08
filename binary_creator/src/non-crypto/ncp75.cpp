#include <iostream>
#include <map>
#include <string>
#include <sstream>
using namespace std;

int main() {
    string text = "apple orange apple mango orange apple";
    string word;
    map<string, int> freq;
    stringstream ss(text);
    while (ss >> word) freq[word]++;
    for (auto &p : freq)
        cout << p.first << ": " << p.second << endl;
}
