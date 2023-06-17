//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int a,b;
    cin>>a>>b;
    double discount_percentage;

    discount_percentage = ((a-b) * 100.0) / a;
    cout<<discount_percentage<<endl;

    
    return 0;
}