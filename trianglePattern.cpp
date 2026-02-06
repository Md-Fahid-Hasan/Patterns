#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the triangle pattern: ";
    cin >> n;
    for(int i = 1; i <= n; i++) {
        cout << string(i, '*') << "\n";
    }
    return 0;
}