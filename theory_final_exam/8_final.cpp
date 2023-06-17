#include<bits/stdc++.h>
using namespace std;

int LCS_length(const string& s, const string& t, int m, int n, vector<vector<int>>& dp){
    if(m == 0 || n == 0){
        return 0;
    }
    if(dp[m][n] != -1){
        return dp[m][n];
    }

    if(s[m-1] == t[n-1]){
        dp[m][n] = 1 + LCS_length(s, t, m-1, n-1, dp);
        return dp[m][n];
    }
    else{
        return dp[m][n] = max(LCS_length(s, t, m-1, n, dp), LCS_length(s, t, m, n-1, dp));
    }
}

string LCS(const string& s, const string& t, int m, int n, vector<vector<int>>& dp){
    if(m == 0 || n == 0){
        return "";
    }
    if(s[m-1] == t[n-1]){
        return LCS(s, t, m-1, n-1, dp) + s[m-1];
    }
    else{
        if(dp[m-1][n] > dp[m][n-1]){
            return LCS(s, t, m-1, n, dp);
        }
        else{
            return LCS(s, t, m, n-1,dp);
        }
    }
}

int main(){
    string s, t;
    cin>>s>>t;

    int m = s.size();
    int n = t.size();

    vector<vector<int>>dp(m+1, vector<int>(n+1, -1));

    int lcs_size = LCS_length(s, t, m, n, dp);

    string lcs_string = LCS(s, t, m, n, dp);

    cout<<lcs_string<<endl;
    return 0;
}