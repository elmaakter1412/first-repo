#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int low = 0,high = n-1;
    bool flag = 0;
    while(low<=high){
        int mid = (low+high)/2;
        cout<<"Low = "<<low<<" High = "<<high<<" Mid = "<<mid<<endl;
        if(a[mid]==k){
            cout<<"Yes "<<mid<<endl;
            flag = 1;
            break;
        }
        if(a[mid] > k){
            high = mid - 1;
        }
        else{
            //a[mid] < k
            low = mid + 1;
        }
    }
    if(flag = 0){
    cout<<"No\n";
    }
    
    return 0;
}
/*
n
sorted array

k

10 10
2 4 6 7 8 9 10 11 14 18
*/