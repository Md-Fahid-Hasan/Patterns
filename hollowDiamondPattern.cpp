#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;
    // This will print the upper half of the hollow diamond pattern, including the middle line.
    for(int i = 1; i <= n; i++) {
        // This will print the spaces before the first star in each line.
        for(int j = n; j > i; j--) {
            cout << "  ";
        }

        cout << "* ";
        // This will print the spaces between the two stars in each line.
        for(int k = 1; k < (2*i - 2); k++) {
            cout << "  ";
        }

        if(i > 1) {
            cout << " *";
        }

        cout << "\n";
    }
    // This will print the lower half of the hollow diamond pattern.
    for(int i = n-1; i >= 1; i--) {
        // This will print the spaces before the first star in each line.
        for(int j = n; j > i; j--) {
            cout << "  ";
        }

        cout << "* ";
        // This will print the spaces between the two stars in each line.
        for(int k = 1; k < (2*i - 2); k++) {
            cout << "  ";
        }

        if(i > 1) {
            cout << " *";
        }

        cout << "\n";
    }
    return 0;
}