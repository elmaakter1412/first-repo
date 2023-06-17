//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string txt, pat;
    cin>>txt>>pat;
    ll k = pat.size(), i=0, j=0, ans=0;
    ll freq1[26] = {0};
    ll freq2[26] = {0};
    
    for(char c: pat){
        freq1[c - 'a']++;
    }
    while(j<txt.size()){
        freq2[txt[j] - 'a']++;
        if(j<k-1){
            j++;
        }
        else{
            bool flag = true;
            for(int v=0; v<26; v++){
                if(freq1[v] != freq2[v]){
                    flag = false;
                    break;
                }
            }
            if(flag){
                ans++;
            }
            freq2[txt[i] - 'a']--;
            i++;
            j++;
        }
    }
    cout<<ans<<endl;
    return 0;
}