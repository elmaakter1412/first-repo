//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int count_ABC_subsequence(string s){
    int count = 0, n = s.size();
    for(int i=0; i<n-2; i++){
        if(s[i] == 'A' && s[i+1] == 'B' && s[i+2] == 'C'){
            count++;
        }
    }
    return count;
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
            int n;
            cin>>n;

            string s;
            cin>>s;
            int result = count_ABC_subsequence(s);
            cout<<result<<"\n";
            return 0;
}