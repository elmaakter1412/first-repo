//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;

    
string result(int n, int m){
    if((n + m) % 2 == 0){
        return "YES";
    }
    return "NO";
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int n,m;
        cin>>n>>m;

        cout<<result(n, m)<<endl;
    }
    return 0;
}