//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
void result(){
    int k,s, count = 0;
    cin>>k>>s;

    for(int x=0; x<=k; x++){
        for(int y=0; y<=k; y++){
            int z = s-x-y;
            if(z >= 0 && z <= k){
                count++;
            }
        }
    }
    cout<<count<<endl;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}