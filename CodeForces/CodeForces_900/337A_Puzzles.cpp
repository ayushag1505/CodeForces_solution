#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n, m ;
    cin>>n >>m ;
    
    int a[m] ;
    for(int i=0; i<m; i++) cin>>a[i] ;
    sort(a, a+m) ;
    
    int ans=INT_MAX ;
    for(int i=0; i<m-n+1; i++){
        ans= min(ans, a[i+n-1]- a[i]) ;
    }
    cout<<ans ;
    
    return 0 ;
}