#include<bits/stdc++.h>
using namespace std;

string apply_rules(string s){
    string result = "";
    int i = 0;
    while (i < s.length()){
        if (isdigit(s[i])){
            int n = s[i] - '0';
            i++;
            while (isdigit(s[i])) {
                n = n * 10 + (s[i] - '0');
                i++;
            }
            string c = "";
            while (islower(s[i])) {
                c += s[i];
                i++;
            }
            for (int j = 0; j < n; j++) {
                result += c;
            }
        }
        else{
            result += s[i];
            i++;
        }
    }
    return result;
}

int main() {
    string s;
    cin >> s;
    string final_string = apply_rules(s);
    cout << final_string << endl;
    return 0;
}
