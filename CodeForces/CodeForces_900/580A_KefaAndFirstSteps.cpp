#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int a[n] ;
    for(int i=0; i<n; i++) cin>>a[i] ;
    
    int ans=1 ;
    int counter=1 ;
    for(int i=1; i<n; i++){
        if(a[i] >= a[i-1]) counter++ ;
        else{
            ans=max(ans, counter) ;
            counter=1 ;
        }
    }
    ans= max(ans, counter) ;
    cout<<ans ;
    
    return 0 ;
}