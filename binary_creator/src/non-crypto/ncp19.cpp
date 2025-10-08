#include <iostream>
using namespace std;

struct Student {
    string name;
    int age;
};

int main() {
    Student s1 = {"Alice", 20};
    cout << s1.name << " " << s1.age << endl;
}
