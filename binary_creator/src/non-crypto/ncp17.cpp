#include <iostream>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5,6};
    int even=0, odd=0;
    for (int x : arr)
        (x%2==0 ? even : odd)++;
    cout << "Even: " << even << " Odd: " << odd << endl;
}