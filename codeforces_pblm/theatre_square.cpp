#include<bits/stdc++.h>
using namespace std;

int main(){
    long long  n, m, a;
    cin>>n>>m>>a;

    long long num_of_flagstones = ceil(static_cast<double>(n) / a) * ceil(static_cast<double>(m) / a);

    cout<<num_of_flagstones<<endl;
    return 0;


}