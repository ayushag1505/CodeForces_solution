#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        a[0]=1 ;
        a[1]=n ;
        for(int i=2; i<n; i++){
            a[i]= i ;
        }
        for(int i=0; i<n; i++){
            cout<<a[i] <<" " ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}