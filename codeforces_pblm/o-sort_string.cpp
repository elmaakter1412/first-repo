//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);

    int n;
    cin>>n;
    int freq[26] = {0};
    for(int i=0; i<n; i++){
        char c;
        cin>>c;
        freq[c-'a']++;
    }

    for(int i=0; i<26; i++){
        if(freq[i] > 0){
            for(int j=1; j<= freq[i]; j++){
                char c = 'a' + i;
                cout<<c;
            }
        }
    }
    cout<<endl;

    
    return 0;
}