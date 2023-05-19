#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int m ;
    cin>>m ;
    while(m--){
       if(n%10==0){
           n/=10 ;
       } 
       else{
           n-- ;
       }
    }
    cout<<n ;
    cout<<"\n" ;
    return 0 ;
}