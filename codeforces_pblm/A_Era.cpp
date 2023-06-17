//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int minimum_operations(vector<int>&a){
    int m = a.size(), result = 0;

    for(int i=0; i<m; i++){
        if(a[i] > i+1){
            int diffenence = a[i] - (i + 1);
            result = max(result, diffenence);
            a[i] = i + 1;
        }
    }
    return result;
    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    ll ts_case;
    cin >> ts_case;
    
    while(ts_case--){
        int n;
        cin>>n;

        vector<int>a(n);
        for(int i=0; i<n; i++){
            cin>>a[i];
        }
        int result = minimum_operations(a);
        cout<<result<<endl;
    }
    return 0;
}