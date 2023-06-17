//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
const int MAX = 1e2+5;
int value[MAX];
//int gcd[1002];
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m_x = 0;
    cin>>n;

    for(int i=1; i<=n; i++){
        cin>>value[i];
        m_x = max(m_x, value[i]);
    }

    int gretest_gcd = 0, solve;
    for(int i=2; i<=m_x; i++){
        int total_value = 0;
        for(int j=1; j<=n; j++){
            if(value[j] % i == 0){
                total_value++;
            }
        }
        if(total_value > gretest_gcd){
            gretest_gcd = total_value;
            solve = i;
        }
    }
    cout<<solve<<"\n";
    
    return 0;
}