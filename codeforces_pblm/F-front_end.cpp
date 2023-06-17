//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    int front = 0, end = n-1;
    while(front < end){
        cout<<a[front]<<" ";
        cout<<a[end]<<" ";

        front++;
        end--;
    }

    if(front == end){
        cout<<a[front];
    }
    return 0;
}