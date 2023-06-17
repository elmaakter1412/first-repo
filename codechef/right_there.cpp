//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int n,x;
        cin>>n>>x;
        if(n <= x){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}