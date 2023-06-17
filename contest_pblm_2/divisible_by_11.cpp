#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;

    int odd_sum = 0, even_sum = 0;
    for(int i = n.size() - 1; i >= 0; i--){
        int digit = n[i] - '0';
        if((n.size() - i) % 2 == 0){
            even_sum += digit;
        }
        else{
            odd_sum += digit;
        }
    }
    int difference = abs(odd_sum - even_sum);
    if(difference % 11 == 0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    return 0;
}