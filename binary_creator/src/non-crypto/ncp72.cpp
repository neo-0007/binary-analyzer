#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ifstream fin("output.txt");
    string line;
    while (getline(fin, line)) cout << line << endl;
    fin.close();
}
