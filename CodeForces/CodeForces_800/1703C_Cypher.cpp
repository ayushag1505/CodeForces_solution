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
        int i=0 ;
        while(i<n){
            int x ;
            cin>>x ;
            string s ;
            cin>>s ;
            for(int j=0; j<x; j++){
                if(s[j]=='U' and a[i]==0) a[i]=9 ;
                else if(s[j]=='D' and a[i]==9) a[i]=0 ;
                else if(s[j]=='U')a[i]-- ;
                else a[i]++ ;
            }
            i++ ;
        }
        for(int i=0; i<n; i++){
            cout<<a[i] <<" " ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}