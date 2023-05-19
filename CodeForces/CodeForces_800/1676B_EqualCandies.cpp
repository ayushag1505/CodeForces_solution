#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>> n; 
        int a[n] ;
        int mini= INT_MAX ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            mini= min(mini, a[i]) ;
        }
        int sum= 0 ;
        for(int i=0; i<n; i++){
            sum+= a[i] - mini ;
        }
        cout<<sum ;
        cout<<"\n" ;
    }
    return 0 ;
}