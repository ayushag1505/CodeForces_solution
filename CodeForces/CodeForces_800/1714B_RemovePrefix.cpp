#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        for(int i=0; i<n; i++) cin>>a[i] ;
        set<int>st ;
        int ans= n ;
        for(int i=n-1; i>=0; i--){
            if(st.count(a[i])) break ;
            ans-- ;
            st.insert(a[i]) ;
        }
        cout<<ans <<"\n" ;
    }
    return 0 ;
}