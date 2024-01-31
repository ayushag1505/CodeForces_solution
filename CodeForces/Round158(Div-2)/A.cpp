#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    
    while(t--){
        int n, m ;
        cin>>n >>m ;
        
        int a[n] ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
        }
        
        int ans = 0 ;
        int ini = 0 ;
        
        for(int i=0; i<n; i++){
            ans = max(ans, a[i] - ini) ;
            ini = a[i] ;
        }
        
        ans = max(ans, 2*(m - a[n-1])) ;
        cout<<ans ;
        cout<<"\n" ;
    }
}