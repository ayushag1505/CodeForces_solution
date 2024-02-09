#include<bits/stdc++.h>
using namespace std ;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int t ;
    cin>>t ;
    
    while(t--){
        long long n ; 
        cin>>n ;
        
        long long ans = 0 ;
        for(long long i=n; i<=1e18; i++){
            
            bool flag = true ;
            long long x = i ;
            
            while(x != 0){
                if(x%10 == 0) {
                    x/= 10 ;
                    continue ;
                }
                
                if(i%(x%10) != 0){
                    flag = false ;
                    break ;
                }
                
                x/= 10 ;
            }
            
            if(flag) {
                ans = i ;
                break ;
            }
        }
        cout<<ans ;
        cout<<"\n" ;
    }
    
    return 0 ;
}