//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int p = 1, q = n;

    for(int row = 1; row <= n; row++){
        for(int idx = 1; idx <= n; idx++){
            if(p == q && row == idx){
                cout<<"X";
            }
            else if(idx == p){
                cout<<"\\";
            }
            else if(idx == q){
                cout<<"/";
            }
            else{
                cout<<"*";
            }
        }
        cout<<endl;
        p++;
        q--;
    }
    
    return 0;
}