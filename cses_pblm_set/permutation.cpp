#include <bits/stdc++.h>
using namespace std;

int main(){
    long long int n;
    cin>>n;
    if(n>3 || n<2){
       for(long long int i=2; i<=n; i+=2){
           cout<<i<<endl;
       }
       for(long long int j=1; j<=n; j+=2){
           cout<<j<<endl;
       }
    }
    else{
        cout<<"NO SOLUTION\n";
    }
    return 0;
}