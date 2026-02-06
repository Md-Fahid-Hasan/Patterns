#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the size of the inverted triangle pattern: ";
    cin >> n;
    string pattern = "";
    for(int i = 1; i <= n; i++) {
        for(int j = 2; j <= i; j++) {
            cout << " ";
        }
        for(int k = n; k >= i; k--) {
            cout << i;
        }
        cout << "\n";
    }
    return 0;
}