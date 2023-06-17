//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool is_palindrome(string s){
    ll n = s.size();

    for(int i=0; i<n; i++){
        if(s[i] != s[n-i-1]){
            return false;
        }
    }
    return true;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin>>s;
     if(is_palindrome(s)){
        cout<<"YES"<<endl;
     }
     else{
        cout<<"NO"<<endl;
     }
    return 0;
}