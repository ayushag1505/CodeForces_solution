#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int t ;
    cin>>t ;
    
    while(t--){
        int n ;
        cin>>n ;
        
        if(n == 1) cout<<-1 ;
        else {
            cout<<2 ;
            for(int i=0; i<n-1; i++) cout<<3 ;
        }
        
        cout<<"\n" ;
        
    }
    
    return 0 ;
}