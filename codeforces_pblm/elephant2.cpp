#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    int eleplant_moves;

    eleplant_moves = (x/5) + (x%5 != 0);
    cout<<eleplant_moves<<endl;
    return 0;
}