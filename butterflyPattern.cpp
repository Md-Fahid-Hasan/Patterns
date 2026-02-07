#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number of rows for the butterfly pattern: ";
    cin >> n;

    // Upper half of the butterfly
    for(int i = 1; i <= n; i++){

        // Star pattern
        string starPattern = "";
        for(int j = 1; j <= i; j++){
            starPattern += "* ";
        }

        // Left wing
        cout << starPattern;

        // Spaces between wings
        cout << string(4 * (n - i), ' ');

        // Right wing
        cout << starPattern;

        cout << "\n";
    }

    // Lower half of the butterfly
    for(int i = n; i >= 1; i--){

        // Star pattern
        string starPattern = "";
        for(int j = 1; j <= i; j++){
            starPattern += "* ";
        }

        // Left wing
        cout << starPattern;

        // Spaces between wings
        cout << string(4 * (n - i), ' ');

        // Right wing
        cout << starPattern;

        cout << "\n";
    }

    return 0;
}