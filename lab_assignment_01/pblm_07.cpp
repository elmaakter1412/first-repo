#include<bits/stdc++.h>
using namespace std;

int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n,a,b;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n;i++){
        cin >> num[i];
    }
    cin >> a >> b;
    
    num.erase(num.begin() + a -1, num.begin() + b);
    for (int i = 0; i < num.size();i++)
        cout << num[i] << " ";
    cout << "\n";
    return 0;
}