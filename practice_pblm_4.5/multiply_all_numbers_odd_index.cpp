#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    int Odd = 1;
    for(int i=0;i<n;i++){
        if(i%2==1){
            Odd *= a[i];
        }
    }
    cout<<"Odd Index Product: "<<Odd<<endl;
    return 0;
}