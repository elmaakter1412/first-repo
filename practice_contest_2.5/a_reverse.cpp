#include<bits/stdc++.h>
using namespace std;
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int l,r;
    string s;
    cin>>l>>r;
    cin>>s;
    reverse(s.begin() + l-1,s.begin() + r);
    cout<<s;
    return 0;
}