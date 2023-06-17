//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int s, t, count = 0;
    cin>>s>>t;

    for(int a=0; a<=s; a++){
        for(int b=0; b<=s; b++){
            for(int c=0; c<=s; c++){
                if(a+b+c <= s && a*b*c <= t){
                    count++;
                }
            }
        }
    }
    cout<<count<<endl;
    
    return 0;
}