#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        int b[n] ;
        for(int i=0; i<n; i++)cin>>a[i] ;
        for(int i=0; i<n; i++)cin>>b[i] ;
        
        for(int i=0; i<n; i++){
            if(i==0){
                cout<<b[i]-a[i] <<" ";
            }
            else{
                cout<<b[i] - max(a[i], b[i-1]) <<" ";
            }
        }
        cout<<"\n" ;
    }
}