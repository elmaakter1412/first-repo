#include<bits/stdc++.h>
using namespace std;

int main(){
    int x;
    cin>>x;

    int elephant_moves;
    if(x % 5 == 0){
        elephant_moves = x/5;
    }
    else{
        elephant_moves = (x/5) + 1;
    }
    cout<<elephant_moves<<endl;
    return 0;
}