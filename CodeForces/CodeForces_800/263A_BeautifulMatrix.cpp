#include <bits/stdc++.h>
using namespace std ;

int main(){
    int a[5][5] ;
    int k=0, l=0 ;
    int ans= 0 ;
    for(int i=0; i<5; i++){
       for(int j=0; j<5; j++){
           cin>>a[i][j] ;
           if(a[i][j]==1){
               k=i ;
               l=j ;
           }
       } 
    }
    ans = abs(k-2) + abs(l-2) ;
    cout<<ans ;
    cout<<"\n" ;
    return 0 ;
}