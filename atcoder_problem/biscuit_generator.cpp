//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,t;
    cin>>a>>b>>t;
    int time = a, total_biscuit = 0;

    while(time <= t + 0.5){
        total_biscuit = total_biscuit + b;
        time = time + a;
    }
    cout<<total_biscuit<<endl;
    return 0;
}