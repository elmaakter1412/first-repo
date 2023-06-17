#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Function to find the length of the LCS
int findLCSLength(const string& s, const string& t, int m, int n, vector<vector<int>>& memo) {
    if (m == 0 || n == 0)
        return 0;

    if (memo[m][n] != -1)
        return memo[m][n];

    if (s[m - 1] == t[n - 1])
        return memo[m][n] = 1 + findLCSLength(s, t, m - 1, n - 1, memo);
    else
        return memo[m][n] = max(findLCSLength(s, t, m - 1, n, memo), findLCSLength(s, t, m, n - 1, memo));
}

// Function to construct the LCS string
string constructLCS(const string& s, const string& t, int m, int n, vector<vector<int>>& memo) {
    if (m == 0 || n == 0)
        return "";

    if (s[m - 1] == t[n - 1])
        return constructLCS(s, t, m - 1, n - 1, memo) + s[m - 1];
    else {
        if (memo[m - 1][n] > memo[m][n - 1])
            return constructLCS(s, t, m - 1, n, memo);
        else
            return constructLCS(s, t, m, n - 1, memo);
    }
}

// Main function
int main() {
    string s, t;
    cin >> s >> t;

    int m = s.length();
    int n = t.length();

    // Create a memoization table
    vector<vector<int>> memo(m + 1, vector<int>(n + 1, -1));

    // Find the length of the LCS
    int lcsLength = findLCSLength(s, t, m, n, memo);

    // Construct the LCS string
    string lcsString = constructLCS(s, t, m, n, memo);

    cout << lcsString << endl;

    return 0;
}
