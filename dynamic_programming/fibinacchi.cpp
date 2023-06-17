#include<bits/stdc++.h>
using namespace std;

long long  ara[101];

/*
ara[3] = 2
ara[4] = 3
ara[5] = 5

ara[6] = 0

O(2^n) => O(n)

*/

long long  fibo(int n){
    if(n<=2){
        // check if fib(n) is already calculated
        return 1;
    }

    if(ara[n] != 0){
        return ara[n];
    }
    ara[n] = fibo(n-1) + fibo(n-2);
    return ara[n];
}

int main(){
    cout<<fibo(3)<<endl;
    cout<<fibo(5)<<endl;
    cout<<fibo(50)<<endl;
    return 0;
}