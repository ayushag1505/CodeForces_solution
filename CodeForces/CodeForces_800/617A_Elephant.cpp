#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int ans=0 ;
    if(n>=5){
        ans+= n/5 ;
        n=n%5 ;
    }
    if(n>=4){
        ans+= n/4 ;
        n=n%4 ;
    }
    if(n>=3){
        ans+= n/3 ;
        n=n%3 ;
    }
    if(n>=2){
        ans+= n/2 ;
        n=n%2 ;
    }
    if(n>=1){
        ans+= n/1 ;
        n=n%1 ;
    }
    cout<<ans ;
    cout<<"\n" ;
    return 0 ;
}