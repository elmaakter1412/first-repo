//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
string code_chef_streak(vector<ll>&om, vector<ll>&addy, ll n){
    ll om_streak = 0, addy_streak = 0, om_curr = 0, addy_cur = 0;

    for(int i=0; i<n; i++){
        if(om[i] > 0){
            om_curr++;
            om_streak = max(om_streak, om_curr);
        }
        else{
            om_curr = 0;
        }

        if(addy[i] > 0){
            addy_cur++;
            addy_streak = max(addy_streak, addy_cur);
        }
        else{
            addy_cur = 0;
        }
    }

    if(om_streak > addy_streak){
        return "Om";
    }
    else if(addy_streak > om_streak){
        return "Addy";
    }
    else{
        return "Draw";
    }
   

    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        ll n;
        cin>>n;

        vector<ll>om(n);
        vector<ll>addy(n);

        for(int i=0; i<n; i++){
            cin>>om[i];
        }
        for(int i=0; i<n; i++){
            cin>>addy[i];
        }

        string result = code_chef_streak(om, addy, n);
        cout<<result<<endl;
    }
    return 0;
}