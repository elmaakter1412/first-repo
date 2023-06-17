//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll is_lucky_number(int n){
    string s = to_string(n);
    for(char c: s){
        if(c != '4' && c != '7'){
            return false;
        }
    }
    return true;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a,b;
    cin>>a>>b;

    bool found = false;
    for(int i=a; i<=b; i++){
        if(is_lucky_number(i)){
            cout<<i<<" ";
            found = true;
        }
    }
    if(!found){
        cout<<"-1"<<endl;
    }
    
    return 0;
}