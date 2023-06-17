//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
void result(){
    ll y;
    cin>>y;

    if(1900 <= y){
        cout<<"Division 1"<<endl;
    }
    else if(1600 <= y){
        cout<<"Division 2"<<endl;
    }
    else if(1400 <= y){
        cout<<"Division 3"<<endl;
    }
    else{
        cout<<"Division 4"<<endl;
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