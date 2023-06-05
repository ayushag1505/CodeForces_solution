#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int l, r, k ;
        cin>>l >>r >>k ;
        int even= 0 ;
        int odd= 0 ;
        if(l==r){
            if(l>1) cout<<"YES" ;
            else cout<<"NO" ;
        }
        else{
            if(l%2==0 and r%2==0){
                odd= (r-l+1)/2 ;
                even= odd+1 ;
            }
            else if(l%2==1 and r%2==1){
                even= (r-l+1)/2 ;
                odd= even+1 ;
            }
            else{
                odd= (r-l+1)/2 ;
                even= odd ;
            }
            if(odd<= k) cout<<"YES" ;
            else cout<<"NO" ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}