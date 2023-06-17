//Author: elmaakter14120;
    
#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;

bool is_palindrome(string s){
    if(s[0] == s[4] && s[1] == s[3]){
        return true;
    }
    return false;
}
    
void result(){
    string t;
    int a;
    cin>>t>>a;

    string hour = t.substr(0,2);
    string min = t.substr(3,4);

    int c_hour = stoi(hour);
    int c_min = stoi(min);

    int count = 0;

    int h = a/60;
    int m = a%60;

    while(1){
        if(is_palindrome(t)){
            count++;

        }
        string s = "";
        c_hour +=  h;
        c_min +=  m;

        if(c_min >= 60){
            c_hour += c_min / 60;
            c_min = c_min % 60;
        }

        if(c_hour >= 24){
            c_hour = c_hour - 24;
        }
        string minn, hourr;
        if(c_min > 9){
            minn = to_string(c_min);
        }
        else{
            minn = "0" + to_string(c_min);
        }
        if(c_hour > 9){
            hourr = to_string(c_hour);
        }
        else{
            hourr = "0" + to_string(c_hour);
        }

        s = hourr + ":" + minn;
        if(s == t){
            break;
        }

    }
    cout<<count<<"\n";


    
}
    
int main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    
    int ts_case = 1;
    cin >> ts_case;
    
    while(ts_case--){

        result();
    }
    return 0;
}