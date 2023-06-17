#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int>st;
    st.insert(5);
    st.insert(3);
    st.insert(4);
    st.insert(7);
    st.insert(3);
    st.insert(4);

    for(auto i: st){
        cout<<i<<endl;
    }
    cout<<endl;

    return 0;
}