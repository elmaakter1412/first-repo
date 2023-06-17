#include<bits/stdc++.h>
using namespace std;

bool is_palindrom(string s){
    map<char, int>Freq;
    for(char t : s){
        Freq[t]++;
    }
    int odd_Freq_count = 0;
    for(auto x : Freq){
        if(x.second % 2 == 1){
            odd_Freq_count++;

        }
    }
    return odd_Freq_count <= 1;
}

int main(){
    string s;
    cin>>s;

    if(is_palindrom(s)){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}