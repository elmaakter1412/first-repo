#include<bits/stdc++.h>
using namespace std;

bool isSubset(vector<int>&first,vector<int>&second){
    if(first.size() > second.size())
        return false;

    sort(first.begin(), first.end());
    sort(second.begin(), second.end());

    int i = 0, j = 0;
    while (i < first.size() && j < second.size()){
        if (first[i] < second[j])
            i++;
        else if (second[j] < first[i])
            j++;
        else
        {
            i++;
            j++;
        }
    }

    if(i == first.size())
        return true;
    else
        return false;
}

int main(){
    
    int n;
    cin >> n;
    vector<int> first(n);
    for (int i = 0; i < n;i++)
        cin >> first[i];


    int k;
    cin >> k;
    vector<int> second(k);
    for (int i = 0; i < k;i++)
        cin >> second[i];


    if(isSubset(first,second))
        cout << "YES\n";
    else
        cout << "NO\n";

    return 0;
}