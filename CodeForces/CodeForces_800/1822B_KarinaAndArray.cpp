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
        long long int a[n] ;
        
        for(int i=0; i<n; i++) cin>>a[i] ;
        
        sort(a, a+n) ;
        long long int maxi= max(a[0]*a[1], a[n-2]*a[n-1]) ;
        cout<<maxi ;
        
        cout<<"\n" ;
    }
        
        
    return 0 ;
}