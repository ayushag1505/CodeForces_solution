#include <bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>> n; 
    int k ;
    cin>> k ;
    int counter=0 ;
    int a[n] ;
    for(int i=0; i<n; i++){
        cin>>a[i] ;
    }
    for(int i=0; i<n; i++){
        if((a[i] > 0) and (a[i] >= a[k-1])) counter++ ;
    }
    cout<<counter <<"\n" ;
    return 0 ;
}