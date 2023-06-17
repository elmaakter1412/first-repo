#include<bits/stdc++.h>
using namespace std;

int sum(int array[], int q){
    if(q<=0){
        return 0;
    }
    return array[q-1] + sum(array, q-1);
}

int main(){
    int q;
    cin>>q;
    int array[q];
    for(int i=0; i<q; i++){
        cin>>array[i];
    }

    int calculate_sum = sum(array,q);
    cout<<calculate_sum<<endl;
    return 0;
}