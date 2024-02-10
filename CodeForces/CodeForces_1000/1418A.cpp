#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int t ;
    cin>>t ;
    
    while(t--){
        long long x, y, k ;
        cin>>x >>y >>k ;
        
        long long ans = k ;
        ans+= (k*y + k -1)/(x-1) ;
        if((k*y + k -1)%(x-1)) ans++ ;
        cout<<ans ;
        cout<<"\n" ;
    }
    
    return 0 ;
}