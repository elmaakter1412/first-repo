#include<bits/stdc++.h>
using namespace std;

int main(){
    queue<long long>q;
    map<long long,int>t;

    long long int x, y;
    cin>>x>>y;
    q.push(y);
    t[y] = 0;

    while(q.size() != 0){
        y = q.front();
        q.pop();

        string s = to_string(y);
        if(s.size() == x){
            cout<<t[y];
            return 0;
        }
        for(int i=0; i<s.size(); i++){
            if(s[i] != '1' && t[y*(s[i] - '0')] == 0){
                q.push(y*(s[i] - '0'));
                t[y*(s[i] - '0')] = t[y] + 1;
            }
        }
    }
    cout<<"-1"<<endl;
    return 0;

}