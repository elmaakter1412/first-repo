//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int longestKSubstr(string s, int k){
    int i=0, j=0, n=s.size(), ans = -1, unq = 0;
    int frq[26] = {0};
    while(j<n){
        char c = s[j];
        if(frq[c-'a'] == 0){
            unq++;
        }
        frq[c-'a']++;
        if(unq > k){
            while(unq > k){
                char leftc = s[i];
                frq[leftc-'a']--;
                if(frq[leftc-'a'] == 0){
                    unq--;
                }
                i++;
            }
        }
        if(unq == k){
            ans = max(ans, j-i+1);
        }
        j++;
    }
    return ans;

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case = 1;
    //cin >> ts_case;
    
    while(ts_case--){
        string s;
        cin>>s;
        int k;
        cin>>k;

        int result = longestKSubstr(s,k);
        cout<<result<<"\n";
    }
    return 0;
}