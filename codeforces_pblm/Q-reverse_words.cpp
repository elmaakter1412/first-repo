//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
//typedef long long int ll;
const int N  = 1e7;
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    char c[N];
    cin.getline(c, N);

    char * words;
    words = strtok(c, " ");
    int i=0; 
    while(words != NULL){
        if(i != 0){
            cout<<" ";
        }
        i++;
        string s = words;
        reverse(s.begin(), s.end());
        cout<<s;
        words = strtok(NULL, " ");
    }
    cout<<endl;

    
    return 0;
}