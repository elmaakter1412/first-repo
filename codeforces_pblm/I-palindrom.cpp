//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;
    string ss = s;
    reverse(s.begin(), s.end());
    ll n = stoi(s);

    string str = to_string(n);
    cout<<str<<endl;
    if(ss == s){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}