#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int t ;
    cin>>t ;
    
    while(t--){
        int n, d ;
        cin>>n >>d ;
        
        if(n>=d) cout<<"YES" ;
        else{
            
            bool flag = false ;
            for(int i=1; i<=n; i++){
                int total = i + (d + i)/(i+1) ;
                if(total <= n){
                    flag = true ;
                    break ;
                }
            }
            
            if(flag) cout<<"YES" ;
            else cout<<"NO" ;
        }
        
        cout<<"\n" ;
    }
    
    return 0 ;
}