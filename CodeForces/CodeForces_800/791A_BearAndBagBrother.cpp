#include<bits/stdc++.h>
using namespace std ;

int main(){
    long long n ;
    cin>>n ;
    long long m ;
    cin>>m ;
    int counter=0 ;
    while(true){
        counter++ ;
        n*=3 ;
        m*=2 ;
        if(n > m) break ;
    }
    cout<<counter ;
    cout<<"\n" ;
    return 0 ;
}