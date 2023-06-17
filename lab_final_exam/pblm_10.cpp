#include<bits/stdc++.h>
using namespace std;

int main(){
    int q;
    cin>>q;

    map<string, int>mp;
    for(int i=0; i<q; i++){
        string r;
        cin>>r;

        if(mp.count(r) == 0){
            cout<<"-1"<<endl;
        }
        else{
            cout<<mp[r]<<endl;
        }
        mp[r] = i;
    }
    return 0;
}