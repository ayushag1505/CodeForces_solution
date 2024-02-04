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
        
        int a[n], b[n] ;
        for(int i=0; i<n; i++) cin>>a[i] ;
        for(int i=0; i<n; i++) cin>>b[i] ;
        
        int lidx = -1 ;
        int ridx = -1 ;
        bool flag = false ;
        
        for(int i=0; i<n; i++){
            if(a[i] < b[i]){
                lidx = i ;
                break ;
            }
            if(a[i] > b[i]){
                flag = true ;
                break ;
            }
        }
        
        for(int i=n-1; i>=0; i--){
            if(a[i] < b[i]){
                ridx = i ;
                break ;
            }
            if(a[i] > b[i]){
                flag = true ;
                break ;
            }
        }
            
        
        if(flag) cout<<"NO" ;
        else if(lidx == -1) cout<<"YES" ;
        else{
            int dif = b[lidx] - a[lidx] ;
            for(int i=lidx+1; i<=ridx; i++){
                if(b[i]-a[i] != dif){
                    flag = true ;
                    break ;
                }
            }
                
            if(flag) cout<<"NO" ;
            else cout<<"YES" ;
        }
        
        cout<<"\n" ;        
    }
    
    return 0 ;
}