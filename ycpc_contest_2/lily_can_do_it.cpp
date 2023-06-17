#include<bits/stdc++.h>
using namespace std;

bool can_win(vector<int>&A){
    int odd = -1, even = -1;
    for(int i=0; i<A.size(); i++){
        if(A[i] % 2 == 0){
            even = i;
        }
        else{
            odd = i;
        }
        if(even != -1 && odd != -1 && abs(even - odd) == 1){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int>A(n);
        for(int i=0; i<n; i++){
            cin>>A[i];
        }
        if(can_win(A)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}