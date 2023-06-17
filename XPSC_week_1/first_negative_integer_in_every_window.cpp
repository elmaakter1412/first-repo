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

    ll i=0, j=0;
    queue<int>q;
    while(j<n){
        if(sub_array[j] < 0){
            q.push(sub_array[j]);
        }
        if(j<k-1){
            j++;
        }
        else{
           if(q.empty()){
            cout<<0<<" ";
           }
           else{
            cout<<q.front()<<" ";
           }
            if(sub_array[i] < 0){
                q.pop();
            }
            i++;
            j++;
        }
    }
    
    return 0;
}