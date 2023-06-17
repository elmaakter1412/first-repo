//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int t;
    cin>>t;
    while(t--){
        int n; 
        cin>>n;
        vector<int>pl(3,0);
        vector<vector<string>>s(3);
        map<string, int>mp;

        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                string ss;
                cin>>ss;

                s[i].push_back(ss);
                mp[ss]++;
            }
        }

        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                int ss = mp[s[i][j]];
                if(ss == 1){
                    pl[i] += 3;
                }
                if(ss == 2){
                    pl[i] += 1;
                }
            }
        }
        for(int i=0; i<3; i++){
            cout<<pl[i]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}