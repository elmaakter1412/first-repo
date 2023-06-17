//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    ll w,x,y,z, beautiful_year;
    cin>>beautiful_year;

    while(1){

        beautiful_year++;
        w = beautiful_year / 1000;
        x = beautiful_year / 100 % 10;
        y = beautiful_year / 10 % 10;
        z = beautiful_year % 10;

        if(w != x && w != y && w != z && x != y && x != z && y != z){
           break;;
        }
    }
    cout<<beautiful_year<<"\n";
    
    return 0;
}