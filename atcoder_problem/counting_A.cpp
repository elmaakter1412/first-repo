//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b,count = 0;
    cin>>a>>b;
    for(int i=a; i<=b; i++){
        count++;
    }
    cout<<count<<endl;
    return 0;
}