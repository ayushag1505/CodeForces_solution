#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int ans= sqrt(n) ;
        while(ans*ans < n) ans++ ;
        cout<<ans <<'\n' ;
    }
    return 0 ;
}