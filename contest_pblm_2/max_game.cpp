#include<bits/stdc++.h>
using namespace std;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin>>q;

    priority_queue<int>pq;
    while(q--){
        int typ;
        cin>>typ;
        if(typ==1){
            int input;
            cin>>input;
            pq.push(input);
        }
        else{
            cout<<pq.top()<<endl;
            pq.pop();
        }
    }
    return 0;

}
    