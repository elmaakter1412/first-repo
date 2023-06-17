#include<bits/stdc++.h>
using namespace std;

int mian(){
    string s;
    cin>>s;

    int upper_case_count = 0;
    int lower_case_count = 0;

    for(char x : s){
        if(isupper(x)){
            upper_case_count++;
        }
        else{
            lower_case_count++;
        }
    }

    if(upper_case_count > lower_case_count){
        for(char &x : s){
            x = toupper(x);
        }
    }
    else{
        for(char &x : s){
            x = tolower(x);
        }
    }
    cout<<s<<endl;
    return 0;
}