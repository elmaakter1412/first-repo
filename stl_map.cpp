#include<bits/stdc++.h>
using namespace std;

int main(){
    map<string, int>mp;
    //insert O(logn)
    mp["goru"] = 1;
    mp["chagol"] = 2;
    mp["vera"] = 3;

    //value of a key O(logn)
    cout<<mp["goru"]<<endl;

    cout<<mp["vera"]<<endl;

    mp["cat"] = 2;
    cout<<mp["cat"]<<endl;

    mp["cat"] = 5;
    cout<<mp["cat"]<<endl;

    //print the map O(n)
    for(auto it:mp){
        cout<<"key : "<<it.first <<", value : "<<it.second<<endl;

    }

    map<int, int>mp2;
    mp2[69] = 1;
    mp2[57] = 4;
    mp2[89] = 4;

    mp2[1000000] = 10;
    cout<<"Printing map 2\n";
    for(auto it:mp2){
        cout<<"key : "<<it.first <<", value : "<<it.second<<endl;

    }
    //size of map O(1)
    cout<<mp.size()<<endl;
    return 0;
}
