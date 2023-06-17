#include<bits/stdc++.h>
using namespace std;
//1000 o(1000+1000000)
/*
Time complexity =o(n + n^2) = o(n^2) 
Memory complexity =o(n)

*/
int main(){
    int n; //o(1)
    cin>>n;
    vector<int>a(n);//o(n)
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //i=0-->n
    //i=1-->n
    //i=2-->n
    //i=n-1-->n
    //n*n = n^2

    for(int i=0;i<n;i++){
        string ans = "No\n";
        for(int j=0;j<n;j++){
            if(i==j){
                continue;
            }
            if(a[i]==a[j]){
                ans = "Yes\n";
            }
        }
        cout<<"i = "<<" "<<ans;
    }

    return 0;
}

/*
n
2 4 6 2
i=0,yes
i=1,No
i=2,No
i=3,Yes
*/