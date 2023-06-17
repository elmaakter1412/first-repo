//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;

bool is_prime(int n){
    if(n == 1 || n == 0){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n % i == 0){
            return false;
        }
    }
    return true;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;

    for(int i=1; i<=n; i++){
        if(is_prime(i)){
            cout<<i<<" ";
        }
    }
    
    
    return 0;
}