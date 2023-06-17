#include<bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin>>s>>t;

    int length = s.size();

    for(int i=0; i<length; i++){
        if(s[i] >= 'A' && s[i] <= 'Z'){
            s[i] += 32;
        }
        if(t[i] >= 'A' && t[i] <= 'Z'){
            t[i] += 32;
        }
    }

    for(int i=0; i<length; i++){
        if(s[i] < t[i]){
            cout<<"-1"<<endl;
            return 0;
        }
        else if(s[i] > t[i]){
            cout<<"1"<<endl;
            return 0;
        }
    }
    cout<<"0"<<endl;
    return 0;
}