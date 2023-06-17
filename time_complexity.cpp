#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int maxi = a[0];
    int mini = a[0];
    int sum = 0;
    for(int i=0;i<n;i++){
        maxi = max(maxi,a[i]);
        mini = min(mini,a[i]);
        sum = sum + a[i];
    }
    cout<<maxi<<endl;
    cout<<mini<<endl;
    cout<<sum<<endl;
    return 0;
}

/*
n
6 4 7 2
i = 0 max(6,6) = 6
i = 1 max(6,4) = 6
i = 2 max(6,7) = 7
i = 3 max(7,2) = 7

*/