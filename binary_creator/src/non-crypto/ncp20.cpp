#include <iostream>
using namespace std;

class Rectangle {
    int w, h;
public:
    Rectangle(int width, int height): w(width), h(height) {}
    int area() const { return w * h; }
};

int main() {
    Rectangle r(5, 7);
    cout << "Area = " << r.area() << endl;
}
