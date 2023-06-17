//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    map<int, int>m_p;
    int min = INT_MAX;
    for(int i=0; i<n; i++){
        m_p[a[i]]++;
        if(a[i] < min){
            min = a[i];
        }
    }
    if(m_p[min] % 2 == 1){
        cout<<"Lucky"<<endl;
    }
    else{
        cout<<"Unlucky"<<endl;
    }
    
    return 0;
}