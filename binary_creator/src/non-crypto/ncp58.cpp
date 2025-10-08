#include <iostream>
#include <string>
using namespace std;

class Student {
public:
    string name;
    int roll;
    float marks;
    void display() {
        cout << "Name: " << name << ", Roll: " << roll << ", Marks: " << marks << endl;
    }
};

int main() {
    Student s = {"Alice", 1, 91.5};
    s.display();
}
