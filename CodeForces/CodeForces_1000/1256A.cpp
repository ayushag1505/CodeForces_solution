#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    
    int t ;
    cin>>t ;
    
    while(t--){
        long long a, b, n, s ;
        cin>>a >>b >>n >>s ;
        
        if((a*n) + b < s) cout<<"NO" ;
        else{
            long long rem = s ;
            long long q = s/n ;
            if(q > a) rem = rem - (a*n) ;
            else rem= rem - (q*n) ;
            
            if(rem > b) cout<<"NO" ;
            else cout<<"YES" ;
            
        }
        
        cout<<"\n" ;
    }
    
    return 0 ;
}