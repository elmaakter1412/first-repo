//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    ll n, even_count = 0, odd_count = 0, positive_count = 0, negative_count = 0;
    cin>>n;
    for(int i=0; i<n; i++){
        int value;
        cin>>value;

        if(value % 2 == 0){
            even_count++;
        }
        else{
            odd_count++;
        }
        if(value > 0){
            positive_count++;
        }
        else if(value < 0){
            negative_count++;
        }
    }
    cout<<"Even: "<<even_count<<endl;
    cout<<"Odd: "<<odd_count<<endl;
    cout<<"Positive: "<<positive_count<<endl;
    cout<<"Negative: "<<negative_count<<endl;
    
    return 0;
}