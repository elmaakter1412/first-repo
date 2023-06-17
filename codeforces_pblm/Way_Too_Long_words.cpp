#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, L;
    cin>>n;

    while(n--){
        string s;
        cin>>s;
        L = s.length();

        if(L <= 10){
            cout<<s<<endl;
        }
        else{
            cout<<s[0]<<L-2<<s[L-1]<<endl;
        }
    }
    return 0;
}