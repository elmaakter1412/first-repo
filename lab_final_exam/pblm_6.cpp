#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    deque<int> ldr;
    vector<int> a(n);
    for (int i = 0; i < n;i++){
        int z;
        cin >> z;
        ldr.push_back(z);
    }
    for (int i = 0;i<n;i++){
        if(ldr.front() < ldr.back()){
            a[i] = ldr.front();
            ldr.pop_front();
        }else{
            a[i] = ldr.back();
            ldr.pop_back();
        }
    }
    for (int i = 0; i < n;i++){
        cout << a[i] << " ";
    }
    cout << "\n";
    return 0;
}