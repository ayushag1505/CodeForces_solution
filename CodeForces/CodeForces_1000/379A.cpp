#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int a, b ;
    cin>>a >>b ;
    
    int ans = a ;

    while(a >= b){
        int q = a/b ;
        ans+= q ;
        int rem = a%b ;
        a = q + rem ;
    }
    
    cout<<ans ;

    return 0 ;
}