#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int a[n] ;
    for(int i=0; i<n; i++) cin>>a[i] ;
    sort(a, a+n) ;
    int sum= 0 ;
    for(int i=0; i<n; i++) sum+= a[i] ;
    int sumj= 0 ;
    int counter= 0 ;
    for(int i=n-1; i>=0; i--){
        if(sumj > sum){
            break ;
        }
        sumj+= a[i] ;
        sum-= a[i] ;
        counter++ ;
    }
    cout<<counter;
    return 0 ;
}