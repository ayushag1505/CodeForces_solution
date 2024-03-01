#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n ;
    cin>>n ;
    
    int z=0 ;
    
    for(int i=0; i<n; i++){
        int x ;
        cin>>x ;
        
        if(x == 0) z++ ;
    }
    
    if(z == n) cout<<"EASY" ;
    else cout<<"HARD" ;
    
    return 0 ;
}