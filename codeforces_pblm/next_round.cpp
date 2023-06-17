#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    vector<int>array(n);
    for(int i=0; i<n; i++){
        cin>>array[i];
    }

    int count = 0;

    int kth_place_scr = array[k-1];

    for(int i=0; i<n; i++){
        if(array[i] >= kth_place_scr && array[i] > 0){
            count++;
        }
    }
    cout<<count<<endl;
    return 0;
}