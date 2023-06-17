//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n,k;
    cin>>n>>k;

    vector<int>sub_array(n);
    for(int i=0; i<n; i++){
        cin>>sub_array[i];
    }

    int maxx = INT_MIN;
    for(int i=0; i<=n-k; i++){
        int sum = 0;
        for(int j=i; j<i+k; j++){
            sum = sum + sub_array[j];
        }
        maxx = max(maxx, sum);
    }
    cout<<maxx<<endl;
    
    return 0;
}