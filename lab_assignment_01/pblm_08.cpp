#include<bits/stdc++.h>
using namespace std;

vector<int> even_generator(vector<int>&a){
    vector<int> b;
    for (int i = 0; i < a.size();i++){
        if(a[i] %2 == 0)
            b.push_back(a[i]);
    }
    return b;
}

int main(){
    vector<int> a = {1, 4, 2, 3, 8};
    vector<int> evn = even_generator(a);
    for (int i = 0; i < evn.size();i++)
        cout << evn[i] << " ";
    cout << "\n";
    return 0;
}