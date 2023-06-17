#include<bits/stdc++.h>
using namespace std;

bool check_palindrom(string s){
    deque<char>d;

    for(int i=0; i<s.length(); i++){
        d.push_back(s[i]);
    }
    
    while(d.size() > 1){
        char first = d.front();
        char last = d.back();
        if(first != last){
            return false;
        }
        d.pop_front();
        if(d.size() != 0){
        d.pop_back();
        }
    }
    return true;
}

int main(){
    string s;
    cin>>s;
    bool retult = check_palindrom(s);
    if(retult){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
    }
    return 0;
}