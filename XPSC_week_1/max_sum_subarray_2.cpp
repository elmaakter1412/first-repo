//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll n,k;
    cin>>n>>k;

    vector<int>sub_array(n);
    for(int i=0; i<n; i++){
        cin>>sub_array[i];
    }

    ll maxx = INT_MIN, i=0, j=0, sum=0;
    while(j<n){
        sum = sum + sub_array[j];
        if(j<k-1){
            j++;
        }
        else{
            maxx = max(maxx, sum);
            sum = sum - sub_array[i];
            i++;
            j++;
        }
    }
    cout<<maxx<<endl;
    
    return 0;
}