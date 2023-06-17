#include<bits/stdc++.h>
using namespace std;

int convert(char x){
    switch(x){
    case '1':
        return 1;
        break;
    case '2':
        return 2;
        break;
    case '3':
        return 3;
        break;
    case '4':
        return 4;
        break;
    case '5':
        return 5;
        break;
    case '6':
        return 6;
        break;
    case '7':
        return 7;
        break;
    case '8':
        return 8;
        break;
    
    default:
        return 9;
        break;
    }
        
}
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    string s;
    cin >> s;

    int a = convert(s[0]);
    int b = convert(s[2]);

    cout << a * b;

    return 0;
    
}