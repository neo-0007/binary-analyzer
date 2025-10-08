#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream out("sample.txt");
    out << "Hello from file!\n";
    out.close();

    ifstream in("sample.txt");
    string line;
    while (getline(in, line)) cout << line << endl;
}