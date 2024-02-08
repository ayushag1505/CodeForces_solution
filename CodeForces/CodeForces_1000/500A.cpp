#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int n, t ;
    cin>>n >>t ;
    t-- ;
    
    int a[n] ;
    for(int i=0; i<n; i++){
        cin>>a[i] ;
    }
    
    int dis[n] ;
    dis[0] = a[0] ;
    
    for(int i=1; i<n; i++) dis[i] = a[i] + i ;
    int d = 0 ;
    bool flag = false ;
    
    while(d < t){
        d = dis[d] ;
        if(d == t) {
            flag = true ;
            break ;
        }
        if(d > t) break ;
    }
    if(flag) cout<<"YES" ;
    else cout<<"NO" ;
    
    return 0 ;
}