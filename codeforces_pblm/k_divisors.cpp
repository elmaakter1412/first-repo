//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;

void divisor(int n){
    for(int i=1; i<=n; i++){
        if(n % i == 0){
            cout<<i<<endl;
        }
    }
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    divisor(n);
    
    return 0;
}