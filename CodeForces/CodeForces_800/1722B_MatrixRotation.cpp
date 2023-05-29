#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int a, b, c, d ;
        cin>>a >>b >>c >>d ;
        if(a<b == c<d and a<c == b<d) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}