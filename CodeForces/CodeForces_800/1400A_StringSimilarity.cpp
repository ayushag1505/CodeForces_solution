#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ; 
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
        }
        if(n==1 and a[0]==1) cout<<"YES" ;
        else if(n==1 and a[0]!= 1) cout<<"NO" ;
        else{
            sort(a, a+n) ;
            if(a[n-1] - a[n-2] > 1)cout<<"NO" ;
            else cout<<"YES" ;
        }
        cout<<"\n" ;
    }
}