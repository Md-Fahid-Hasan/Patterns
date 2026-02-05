#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the square pattern: ";
    cin >> n;
    string pattern = "";
    for (int i = 0; i < n; i++) {
        pattern += "* ";
    }
    for (int i = 0; i < n; i++) {
        cout << pattern << "\n";
    }
    return 0;
}