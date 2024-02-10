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
        
        int mul = n*m ;
        int ans = mul/3 ;
        if(mul%3) ans++ ;
        cout<<ans ;
        
        cout<<"\n" ;
    }
    
    return 0 ;
}