//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

ll GCD(int a, int b, int c){
    ll solve = 1;
    for(int i=2; i<=a && i<=b && i<=c; i++){
        if(a%i == 0 && b%i == 0 && c%i == 0){
            solve = i;
        }
    }
    return solve;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll k, sum = 0;
    cin>>k;

    for(int a=1; a<=k; a++){
        for(int b=1; b<=k; b++){
            for(int c=1; c<=k; c++){
                sum = sum + GCD(a,b,c);
            }
        }
    }
    cout<<sum<<"\n";
    
    return 0;
}