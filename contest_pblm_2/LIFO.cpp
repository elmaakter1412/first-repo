#include<bits/stdc++.h>
using namespace std;

int main(){
    string s;
    cin>>s;

    stack<char>st;
    for(char now : s){
        if(now == '{'){
            st.push(now);
        }
        else if(now == '}'){
            if(st.empty() || st.top() != '{'){
                cout<<"0"<<endl;
                return 0;
            }
            st.pop();
        }
    }

    if(st.empty()){
        cout<<s.size()<<endl;
    }
    else{
        cout<<"0"<<endl;
    }
    return 0;
}