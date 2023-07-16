#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        if(n < 2020) cout<<"NO" ;
        else{
            int rem= n%2020 ;
            n= n- (2021)*rem ;
            if(n<0) cout<<"NO" ;
            else if(n%2020 == 0) cout<<"YES" ;
            else cout<<"NO" ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}