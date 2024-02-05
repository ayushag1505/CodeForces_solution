#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n ;
    cin>>n ;
        
    if(n&1) cout<< 0 ;
    else{
        int ans = 1<<(n/2) ;
        cout<<ans ;
    }
    
    return 0 ;
}