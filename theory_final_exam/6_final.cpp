#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    for(int i=1; i<=t; i++){
        int m;
        cin>>m;

        unordered_map<int, int>mp;
        for(int i=0; i<m; i++){
            int u,v;
            cin>>u>>v;

            mp[u]++;
            mp[v]++;
        }

        int max_possible_num = 0;
        for(const auto &pair: mp){
            if(pair.second > max_possible_num){
                max_possible_num = pair.second;
            }
        }
        cout<<"case "<<i<<": "<<max_possible_num<<endl;
    }
    return 0;
}