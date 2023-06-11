#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n, time ;
        cin>>n >>time ;
        
        int a[n], b[n] ;
        for(int i=0; i<n; i++) cin>>a[i] ;
        for(int i=0; i<n; i++) cin>>b[i] ;
        
        int ans=-1 ;
        int temp=-1; 
        for(int i=0; i<n; i++){
            if(a[i] <= time-i){
                if(temp < b[i]){
                    ans= i+1 ;
                    temp= b[i] ;
                }
            }
        }
        cout<<ans  ;
        cout<<"\n" ;
    }
    
    return 0 ;
}