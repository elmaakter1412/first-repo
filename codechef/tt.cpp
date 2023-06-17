#include <iostream>
#include <vector>

using namespace std;

bool isSubsequenceExists(vector<int>& nums, int target) {
    int n = nums.size();
    
    // Check if target is present in the array
    for (int i = 0; i < n; i++) {
        if (nums[i] == target)
            return true;
    }
    
    // Check if there is a subsequence with bitwise AND equal to target
    int bitwiseAnd = nums[0];
    for (int i = 1; i < n; i++) {
        bitwiseAnd &= nums[i];
        if (bitwiseAnd == target)
            return true;
    }
    
    return false;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N, B;
        cin >> N >> B;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        bool exists = isSubsequenceExists(A, B);
        
        if (exists)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    
    return 0;
}
