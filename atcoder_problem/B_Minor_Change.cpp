//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string t,s;
    cin>>t>>s;

    ll operation = 0;

    for(int i=0; i<s.size(); i++){
        if(t[i] != s[i]){
            operation++;
        }
    }
    cout<<operation<<"\n";
    
    return 0;
}