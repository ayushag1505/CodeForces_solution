#include<bits/stdc++.h>
using namespace std ;


int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        int l=0 ;
        int r= 0;
        for(int i=0; i<n; i++)cin>>a[i] ;
        for(int i=0; i<n; i++){
            if(a[i]==1){
                l=i ;
                break ;
            }
        }
        for(int i=n-1; i>=0; i--){
            if(a[i]==1){
                r=i ;
                break ;
            }
        }
        int counter=0 ;
        for(int i=l; i<r; i++){
            if(a[i]==0)counter++ ;
        }
        cout<<counter <<"\n" ;
    }
    return 0 ;
}