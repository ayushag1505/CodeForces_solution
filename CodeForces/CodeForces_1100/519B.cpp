#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n ;
    cin>>n ;
    
    int a[n], b[n-1], c[n-2] ;
    for(int i=0; i<n; i++) cin>>a[i] ;
    for(int i=0; i<n-1; i++) cin>>b[i] ;
    for(int i=0; i<n-2; i++) cin>>c[i] ;
    
    sort(a, a+n) ;
    sort(b, b+n-1) ;
    sort(c, c+n-2) ;
    
    int find = n-1 ;
    for(int i=0; i<n-1; i++){
        if(a[i] != b[i]){
            find = i ;
            break ;
        }
    }
    
    cout<<a[find] ;
    cout<<"\n" ;
    
    find = n-2 ;
    for(int i=0; i<n-2; i++){
        if(b[i] != c[i]){
            find = i ;
            break ;
        }
    }
    
    cout<<b[find] ;
    
    return 0 ;
}