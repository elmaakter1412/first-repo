//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    int n;
    cin>>n;

    vector<int>a(n);
    int max = INT_MAX;
    for(int i=0; i<n; i++){
        cin>>a[i];
        if(a[i] < max){
            max = a[i];
        }
    }

    int eating_candie = 0;
    for(int i=0; i<n; i++){
        eating_candie += (a[i] - max);
    }
    cout<<eating_candie<<endl;
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