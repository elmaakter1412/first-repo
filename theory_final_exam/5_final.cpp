#include<bits/stdc++.h>
using namespace std;
const int Max_sum = 1e5;

int main(){
    int n;
    cin>>n;

    vector<int>coins(n);
    for(int i=0; i<n; i++){
        cin>>coins[i];
    }

    vector<bool>possible(Max_sum + 1, false);
    possible[0] = true;

    int money_sum = 0;

    for(int i=0; i<n; i++){
        for(int j=Max_sum; j>=coins[i]; j--){
            if(possible[j - coins[i]]){
                possible[j] = true;
            }
        }
    }

    for(int i=1; i<=Max_sum; i++){
        if(possible[i]){
            money_sum++;
        }
    }
    cout<<money_sum<<endl;

    for(int i=1; i<=Max_sum; i++){
        if(possible[i]){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    return 0;
}