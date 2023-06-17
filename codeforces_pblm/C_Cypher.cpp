//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    vector<pair<int, string>>m(n);
    for(int i=0; i<n; i++){
        cin>>m[i].first;
        cin>>m[i].second;
    }

    for(int i=0; i<n; i++){
        int p = a[i];
        string s = m[i].second;
        for(int j=0; j<m[i].first; j++){
            if(s[j] == 'U'){
                if(p==0){
                    p = 9;

                }
                else{
                    p--;
                }
            }
            if(s[j] == 'D'){
                if(p == 9){
                    p = 0;
                }
                else{
                    p++;
                }
            }
        }
        a[i] = p;
    }
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    cout<<"\n";
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        result();
    }
    return 0;
}