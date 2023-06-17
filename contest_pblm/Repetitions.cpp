#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int longest = 0;
    string s;
    cin>>s;
    for(int i=0;i<s.length();){
        char current = s[i];
        int currlen = 0;
        for(;i<s.length() && current == s[i]; ++i){
            ++currlen;
            if(currlen > longest){
                longest = currlen;
            }
        }
    }
    cout<<longest;
    return 0;
}