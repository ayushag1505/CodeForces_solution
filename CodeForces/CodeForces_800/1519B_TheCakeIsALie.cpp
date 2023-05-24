#include<bits/stdc++.h>
using namespace std ;


int main(){
    int t ;
    cin>>t ;
    while(t--){
        int x, y, n ;
        cin>>x >>y >>n ;
        if(n == x*y - 1) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}