#include<bits/stdc++.h>
using namespace std;
int main(){
    int m,n;
    cin>>m>>n;
    vector<int>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    vector<int>b(n);
    for(int i=0;i<n;i++){
        cin>>b[i];
    }
    cout<<"\nThe intersection of the two arrays: ";
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(a[i] == b[j]){
                cout<<a[i]<<" ";
            }
        }
    }
    
    return 0;
}