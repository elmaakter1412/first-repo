#include<bits/stdc++.h>
using namespace std;

int main(){
    set<int> a;
    int n,m;
    cin >> n;
    for (int i = 0; i < n;i++){
        int x;
        cin >> x;
        a.insert(x);
    }
    
    cin >> m;
    for (int i = 0; i < m;i++){
        int x;
        cin >> x;
        a.insert(x);
    }

    for (auto it:a){
        cout << it << " ";
    }
    cout << "\n";

    return 0;
}