#include<bits/stdc++.h>
using namespace std;
/*
Time complexity o(1)
Memory complexity o(1)
*/

int main(){
    int a,b,c;
    cin>>a>>b>>c;
    int maxi = max({a,b,c});
    int mini = min({a,b,c});
    int sum = a+b+c;
    int mul = a*b*c;

    cout<<maxi<<endl;
    cout<<mini<<endl;
    cout<<sum<<endl;
    cout<<mul<<endl;

    return 0;
}