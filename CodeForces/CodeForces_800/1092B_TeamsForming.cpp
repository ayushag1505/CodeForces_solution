#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int a[n] ;
    for(int i=0; i<n; i++)cin>>a[i] ;
    int sum=0 ;
    sort(a, a+n) ;
    for(int i=0; i<n-1; i+=2){
        sum+= a[i+1]- a[i] ;
    }
    cout<<sum ;
    return 0 ;
}