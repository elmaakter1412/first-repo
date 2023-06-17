#include <bits/stdc++.h>
using namespace std;
 
void findMissing(int a[], int n)
{
    int i;
    int temp[n];
    for(i = 0; i <= n - 1; i++){
      temp[i] = 0;
    }
   
    for(i = 0; i < n - 1; i++){
      temp[a[i] - 1] = 1;
    }
 
 
    int ans = 0;
    for (i = 0; i <= n - 1; i++) {
        if (temp[i] == 0)
            ans = i + 1;
    }
    cout<<ans;
}
 

int main(){

  int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n-1;i++){
        cin>>arr[i];
    }
    
    findMissing(arr,n);
}