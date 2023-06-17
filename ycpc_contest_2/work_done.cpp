#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while (t--){
        int x, d1, d2;
        cin >> x >> d1 >> d2;
        int num_people = ceil((double)(x * d1) / (double)(d2));
        cout << num_people << endl;
    }
    return 0;
}