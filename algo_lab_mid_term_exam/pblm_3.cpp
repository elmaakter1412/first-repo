#include<bits/stdc++.h>
using namespace std;


const int N = 1e3 + 3;
const long long INF = 1e9;
long long d[N][N];


int main(){
    int n,m,q;
    cin>>n>>m>>q;


    for(int i = 1; i <= n; i++){
        for(int j = 1; j <= n; j++){
            d[i][j] = INF;
        }
    }


    for(int i = 0; i < m; i++){
        int a,b;
        cin>>a>>b;
        long long c;
        cin>>c;
        d[a][b] = min(d[a][b], c);
        d[b][a] = min(d[b][a], c);
    }


    for(int i=1; i<=n; i++){
        d[i][i] = 0;
    }


    for(int k = 1; k <= n; k++){
        for(int a = 1; a <= n; a++){
            for(int b = 1; b <= n; b++){
                d[a][b] = min(d[a][b], d[a][k] + d[k][b]);
            }
        }
    }
    for(int i = 0; i < q; i++){
        int a,b;
        cin>>a>>b;
        if(d[a][b] == INF){
            cout<<-1<<endl;
        }
        else{
            cout<<d[a][b]<<endl;
        }
       
    }


    return 0;
}
