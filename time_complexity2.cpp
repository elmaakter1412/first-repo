#include<bits/stdc++.h>
using namespace std;
/*
Time complexity = o(n + 1 + n + 1) = o(2*n + 1) = o(2*n) = o(c*n) = o(n)
Memory complexity = o(n)

o(c*n) = o(n)
o(1*3) = o(1)
*/
int main(){
    int n; //o(1)
    cin>>n;
    vector<int>a(n);//o(n)
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