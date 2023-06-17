//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    string s;
    cin>>s;

    ll sum_first = 0, sum_last = 0;

    for(int i=0; i<3; i++){
        sum_first = sum_first + s[i] - '0';
    }
    for(int j=3; j<6; j++){
        sum_last = sum_last + s[j] - '0';
    }

    if(sum_first == sum_last){
        cout<<"YES"<<"\n";
    }
    else{
        cout<<"NO"<<"\n";
    }
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