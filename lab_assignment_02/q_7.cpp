#include<bits/stdc++.h>
using namespace std;


void deleteValue(list<int> &l , int value){
    for(auto it = l.begin(); it != l.end(); it++){
        if (*it == value) {
            l.erase(it);
            break;
        }
    }
}


int main(){
    list<int>l = {7, 3, 8, 4, 5, 4};
    int v = 4;


    deleteValue(l, v);
    for(auto it = l.begin(); it != l.end(); it++){
        cout << *it << " ";
    }
    cout<<"\n";


    return 0;
}


