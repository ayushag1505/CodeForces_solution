#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n ;
    cin>> n ;
    int counter=0 ;
    while(n>0){
        int rem=n%10 ;
        if(rem == 4 or rem==7) counter++;
        n=n/10 ;
    }
    if(counter==4 or counter==7) cout<<"YES" ;
    else cout<<"NO" ;
    cout<<"\n" ;
    
}