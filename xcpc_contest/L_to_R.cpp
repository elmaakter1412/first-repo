#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int t;
    cin>>t;
    while(t--){

        long long int l,r;

        long long int n,m;
        cin>>n>>m;
        if(n > m){
            l = m;
            r = n;
        }
        else{
            l = n;
            r = m;
        }

        long long int sum_of_number = (r-l+1) * (l+r)/2;
        cout<<sum_of_number<<endl;
    }
    return 0;
}