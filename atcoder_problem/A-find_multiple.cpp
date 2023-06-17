//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;

    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int a,b,c, solve = -1;;
    cin>>a>>b>>c;
    for(int i=a; i<=b; i++){
        if(i%c == 0){
            solve = i;
            break;
        }
    }
    cout<<solve<<endl;

    return 0;
}