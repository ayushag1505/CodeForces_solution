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
        
        int a[n] ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
        }
        
        sort(a, a+n) ;
        bool flag = false ;
        
        for(int i=0; i<n-1; i++){
            if(abs(a[i] - a[i+1]) > 1){
                flag = true ;
                break ;
            }
        }
        
        if(flag) cout<<"NO" ;
        else cout<<"YES" ;
        
        cout<<"\n" ;
    }
    
    return 0 ;
}