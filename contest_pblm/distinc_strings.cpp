#include<bits/stdc++.h>
using namespace std;
const int MAX_CHAR = 26;
int factorial(int n)
{
    int fact = 1;
    for (int i = 2; i <= n; i++)
        fact = fact * i;
    return fact;
}
 
int countDistinctPermutations(string s)
{
    int length = s.length();
 
    int freq[MAX_CHAR];
    memset(freq, 0, sizeof(freq));
 
    for (int i = 0; i < length; i++)
        if (s[i] >= 'a')
            freq[s[i] - 'a']++;
 
    int fact = 1;
    for (int i = 0; i < MAX_CHAR; i++)
        fact = fact * factorial(freq[i]);
    return factorial(length) / fact;
}
 
int main()
{
    string s;
    cin>>s;
    cout<<countDistinctPermutations(s);
    return 0;
}