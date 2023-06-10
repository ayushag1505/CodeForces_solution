#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n]= {0} ;
        for(int i=0; i<n; i++){
            a[i]=i+1 ;
        }
        if(n%2==0){
            for(int i=n-1; i>=0; i-=2){
                swap(a[i], a[i-1]) ;
            }
        }
        else{
            for(int i=n-1; i>0; i-=2){
                swap(a[i], a[i-1]) ;
            }
        }
        for(int i=0; i<n; i++){
            cout<<a[i] <<" " ;
        }
        cout<<"\n" ;
        
    }
    return 0 ;
}