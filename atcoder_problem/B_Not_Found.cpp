//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    string s;
    cin>>s;

    multiset<char>letter;

    for(char c = 'a'; c <= 'z'; c++){
        letter.insert(c);
    }
    for(char c: s){
        letter.erase(c);
    }

    int result;
    if(letter.empty()){
        cout<<"None"<<endl;
    }
    else{
        cout<<*letter.begin()<<endl;
    }
    return 0;
}