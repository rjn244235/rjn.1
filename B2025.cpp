#include <iostream>
using namespace std;
int main() {
    int n = 3; // Height of the diamond's upper half
    // Upper half of the diamond
    for (int i = 1; i <= n; ++i) {
        for (int j = n - i; j > 0; --j) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }
    // Lower half of the diamond
    for (int i = n - 1; i >= 1; --i) {
        for (int j = n - i; j > 0; --j) {
            cout << " ";
        }
        for (int k = 1; k <= (2 * i - 1); ++k) {
            cout << "*";
        }
        cout << endl;
    }
    return 0;
}













