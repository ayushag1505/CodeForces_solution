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
        int cur = 0 ; 
        
        for(int i=0; i<n; i++){
            int x ;
            cin>>x ;
            
            if(m%2 == 0 and x == m/2){
                cout<<(cur++)%2 ;
            }
            else if(2*x < m) cout<<0 ;
            else cout<<1 ;
            
            cout<<" " ;
        }
        
        cout<<"\n" ;
    }
    
    return 0 ;
}