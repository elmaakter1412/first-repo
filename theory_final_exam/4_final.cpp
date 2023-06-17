#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k;

    cin>>n>>k;

    unordered_map<int, int>mp;

    for(int i=1; i<=n; i++){
        int number;
        cin>>number;

        if(mp.count(k - number)){
            cout<<mp[k - number]<<" "<<i<<endl;
            return 0;
        }

        mp[number] = i;
    }
    cout<<"IMPOSSIBLE"<<endl;
    return 0;
}