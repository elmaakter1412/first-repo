//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;

long maximumSumSubarray(int K, vector<int> &Arr , int N){
    long maxx = INT_MIN, i=0, j=0, sum=0;
    while(j<N){
        sum = sum + Arr[j];
        if(j<K-1){
            j++;
        }
        else{
            maxx = max(maxx, sum);
            sum = sum - Arr[i];
            i++;
            j++;
        }
    }
    return maxx;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    long N,K;
    cin>>N>>K;

    vector<int>Arr(N);
    for(int i=0; i<N; i++){
        cin>>Arr[i];
    }

    long solve = maximumSumSubarray(K, Arr, N);
    cout<<solve<<endl;
    return 0;
}