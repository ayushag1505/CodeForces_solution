#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    
    if(n>0) cout<<n ;
    else{
        n= -n ;
        int rem1= n%10 ;
        int rem2= n%100 ;
        if(rem2 >= 10) rem2/=10 ;
        else rem2= 0 ;
        
        if(rem1 > rem2) cout<<(n/10)*(-1) ;
        else{
            cout<<((n/100)*10 + rem1)*(-1) ;
        }
    }
    
    return 0 ;
}