//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll a,b,c;
    cin>>a>>b>>c;
    bool flag = false;
    for(int i=0; i<=c/a; i++){
        ll solve = c - i * a;
        if((solve) % b == 0){
            flag = true;
            break;
        }
    }
    if(flag){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }

    
    return 0;
}