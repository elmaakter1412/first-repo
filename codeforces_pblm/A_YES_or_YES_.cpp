//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        string s;
        cin>>s;

        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        if( s == "yes"){
            cout<<"YES"<<"\n";
        }
        else{
            cout<<"No"<<"\n";
        }
    }
    return 0;
}