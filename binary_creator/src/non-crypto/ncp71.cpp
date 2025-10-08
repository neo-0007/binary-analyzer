#include <iostream>
#include <fstream>
using namespace std;

int main() {
    ofstream fout("output.txt");
    fout << "Hello, File Handling!" << endl;
    fout.close();
    cout << "File written successfully.\n";
}
