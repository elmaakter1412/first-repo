#include<bits/stdc++.h>
using namespace std;

int main(){
    string n;
    cin>>n;

    int max_length = 1, curr_length = 1;
    for(int i=0; i<n.length(); i++){
        if(n[i] == n[i-1]){
            curr_length++;
        }
        else{
            max_length = max(max_length, curr_length);
            curr_length = 1;
        }
    }
    max_length = max(max_length, curr_length);
    cout<<max_length<<endl;
    return 0;
}