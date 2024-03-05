#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t ;
    cin>>t ;
    
    while(t--){
        int n, m ;
        cin>>n >>m ;
        
        int a[260000] ;
        int b[600][600] ;
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                int x ;
                cin>>x ;
                a[x] = j ;
            }
        }
        
        for(int i=1; i<=m; i++){
            for(int j=1; j<=n; j++){
                int x ;
                cin>>x ;
                b[j][a[x]] = x ;
            }
        }
        
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                cout<<b[i][j] <<" " ;
            }
            cout<<"\n" ;
        }
    }
    
    return 0 ;
}