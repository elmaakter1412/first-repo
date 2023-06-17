//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    for(int row = 1; row <= 2*n; row++){
        int m = row;
        if(m > n){
            m = 2*n-m+1;
        }
        for(int space = 1; space <= n-m; space++){
            cout<<" ";
        }

        for(int colum = 1; colum <= 2*m-1; colum++){
            cout<<"*";
        }
        cout<<endl;
    }
    
    return 0;
}