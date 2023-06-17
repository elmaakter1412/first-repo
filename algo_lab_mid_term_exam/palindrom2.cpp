#include<bits/stdc++.h>
using namespace std;
bool canFormPalindrome(string str)
{
    int count[NO_OF_CHARS] = { 0 };

    for (int i = 0; str[i]; i++)
        count[str[i]]++;
 
    int odd = 0;
    for (int i = 0; i < NO_OF_CHARS; i++) {
        if (count[i] & 1)
            odd++;
 
        if (odd > 1)
            return false;
    }
 
    return true;
}
