#include<bits/stdc++.h>
using namespace std;
//1000 o(1000+1000000)
/*
Time complexity =o( n^2/2 ) = o(n^2) 
Memory complexity =o(n)

*/
int main(){
    int n;
    cin>>n;
    vector<int>a(n);//o(n)
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    //i=0-->1-- n-1 ->n-1
    //i=1-->2-- n-1 ->n-2
    //i=2-->3-- n-1 ->n-3
    //i=n-1-->0 -> 0
    //n*n = n^2

    for(int i=0;i<n;i++){
        string ans = "No\n";
        for(int j=i+1;j<n;j++){
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
i=0, i=3 yes
i=1,No
i=2,No
i=3,No
indx = i,any index j where j>i and a[i]==a[j]

(n-1) + (n-2) + (n-3) + ..+ 2 + 1 + 0
((n-1)*n/2)
(n^2-n)/2
(n^2/2) - (n/2)
*/