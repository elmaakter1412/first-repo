#include <iostream>
#include <string>

using namespace std;

bool areRowsColoredSame(int n, string row1, string row2) {
    for (int i = 0; i < n; i++) {
        if (row1[i] != row2[i]) {
            if (row1[i] == 'G' || row2[i] == 'G') {
                // If one of the cells is green, Vasya can't distinguish it from blue
                return true;
            } else {
                return false;
            }
        }
    }
    
    // All cells are the same color
    return true;
}

int main() {
    int t;
    cin >> t;
    
    while (t--) {
        int n;
        cin >> n;
        
        string row1, row2;
        cin >> row1 >> row2;
        
        bool result = areRowsColoredSame(n, row1, row2);
        if (result) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    }
    
    return 0;
}
