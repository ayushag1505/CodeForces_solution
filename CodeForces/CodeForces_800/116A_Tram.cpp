#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int count=0 ;
    int ans=count ;
    while(n--){
        int a, b ;
        cin>>a >>b ;
        count-=a ;
        count+=b ;
        ans=max(ans, count) ;
    }
    cout<<ans ;
    cout<<"\n" ;
    
}