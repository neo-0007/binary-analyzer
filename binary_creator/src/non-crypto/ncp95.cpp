#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));
    for (int i = 0; i < 5; i++)
        cout << "Roll " << i + 1 << ": " << (rand() % 6 + 1) << endl;
}
