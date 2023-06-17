#include<bits/stdc++.h>
using namespace std;
/*
level -> 5
eve ->3
*/

bool is_palindrom(string str){
    //base case
    if(str == "" || str.size() == 1){
        return true;
    }
    int n = str.size();
    string small_str = str.substr(1, n - 2);
    return is_palindrom(small_str) && (str[0] == str.back());
}

int main(){
    string str;
    cin>>str;

    if(is_palindrom(str)){
        cout<<"Palindrom\n";
    }
    else{
        cout<<"Not Palindrom\n";
    }
    return 0;
}