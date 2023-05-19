#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>> n ;
        int a[n], b[n] ;
        int amin=INT_MAX , bmin= INT_MAX ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            if(a[i] < amin) amin=a[i] ;
        }
        for(int i=0; i<n; i++){
            cin>>b[i] ;
            if(b[i] < bmin) bmin=b[i] ;
        }
        long long counter= 0 ;
        for(int i=0; i<n; i++){
            if(a[i] == amin and b[i]==bmin){
                counter+= 0 ;
            }
            else if(a[i] == amin and b[i] != bmin){
                counter+= b[i] - bmin ;
            }
            else if(a[i] != amin and b[i] == bmin){
                counter+= a[i] - amin ;
            }
            else{
                counter= counter+ max(a[i]-amin, b[i]-bmin) ;
            }
        }
        cout<<counter <<"\n" ;
        
    }
    return 0 ;
}