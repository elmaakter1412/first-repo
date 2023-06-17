#include<bits/stdc++.h>
using namespace std;

void search(vector<int> &a,int k,int n){
    int left = 0;
    int right = n-1;
    bool isOccurred = false;
    while(left<=right){
        int mid = left + (right - left) / 2;
        if((a[mid] == k)&&((a[mid+1] == k)||(a[mid-1] == k))){
            isOccurred = true;
            break;
        }
        else if (a[mid] > k){
            right = mid - 1;
        }else{
            left = mid + 1;
        }
    }
    if(isOccurred)
        cout << "YES\n";
    else
        cout << "NO\n";
}

int main(){
    int n, k;
    cin >> n;
    vector<int> num(n);
    for (int i = 0; i < n;i++)
        cin >> num[i];

    cin >> k;
    search(num, k, n);
    return 0;
}