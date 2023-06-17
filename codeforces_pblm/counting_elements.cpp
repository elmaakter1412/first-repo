//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, count_elements = 0;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a.begin(), a.end());
    for(int i=0; i<n; i++){
        if(binary_search(a.begin(), a.end(), a[i] + 1)){
            count_elements++;
        }
    }
    cout<<count_elements<<endl;
    return 0;
}