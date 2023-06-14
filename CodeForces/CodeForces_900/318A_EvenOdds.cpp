#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n, k;
    cin>>n >>k ;
    if(n%2==0){
       long long mid= n/2 ;
       if(mid >= k){
           cout<<k*2 - 1 ;
       }
       else cout<<(k-mid)*2 ;
    }
    else{
        long long mid= (n+1)/2 ;
        if(mid >= k){
            cout<<k*2 -1  ;
        }
        else cout<<(k-mid)*2 ;
        
    }
    
    return 0 ;
}