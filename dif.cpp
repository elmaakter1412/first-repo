#include <iostream>
#include <string>
using namespace std;

int main() {
    string num;
    cin >> num;
    int odd_sum = 0, even_sum = 0;
    for(int i = num.length() - 1; i >= 0; i--) {
        int digit = num[i] - '0';
        if((num.length() - i) % 2 == 0) {
            even_sum += digit;
        } else {
            odd_sum += digit;
        }
    }
    int diff = abs(odd_sum - even_sum);
    if(diff % 11 == 0) {
        cout << "YES\n";
    } else {
        cout << "NO\n";
    }
    return 0;
}
