#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m, k ;
    cin>>n >>m >>k ;
    
    int a[m+1] ;
    for(int i=0; i<=m; i++) cin>>a[i] ;
    
    int ans = 0 ;
    
    for(int i=0; i<m; i++){
        int x  = a[m]^a[i] ;
        int cnt = 0 ;
        
        for(int j=0; j<n; j++){
            int mask = 1<<j ;
            if(x & mask) cnt++ ;
        }
        
        if(cnt <= k) ans++ ;
    }
    
    cout<<ans ;
    return 0 ;
}