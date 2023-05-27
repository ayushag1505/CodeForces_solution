#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        int sum=0 ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            sum+= a[i] ;
        }
        if(sum% n ==0)cout<<sum/n ;
        else cout<<sum/n + 1 ;
        cout<<"\n" ;
        
    }
}