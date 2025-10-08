#include <iostream>
#include <vector>
using namespace std;

class Stack {
    vector<int> v;
public:
    void push(int x) { v.push_back(x); }
    void pop() { if (!v.empty()) v.pop_back(); }
    int top() { return v.empty() ? -1 : v.back(); }
    bool empty() { return v.empty(); }
};

int main() {
    Stack s;
    s.push(5);
    s.push(10);
    s.pop();
    cout << s.top() << endl;
}
