#include<bits/stdc++.h>
using namespace std;

int sum_of_digit(int n){
    if(n == 0){
        return 0;
    }
    return (n % 10 + sum_of_digit(n / 10));
}

int main(){
    int n;
    cin>>n;

    int result = sum_of_digit(n);
    cout<<result<<endl;
    return 0;
}