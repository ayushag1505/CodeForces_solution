#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        for(int i=0; i<n; i++) cin>>a[i] ;
        int counter=0 ;
        int temp= 0 ;
        for(int i=0; i<n; i++){
            if(a[i]==0){
                temp++ ;
            }
            else{
                counter= max(counter, temp) ;
                temp= 0 ;
            }
        }
        counter= max(counter, temp) ;
        cout<<counter <<"\n" ;
    }
    return 0 ;
}