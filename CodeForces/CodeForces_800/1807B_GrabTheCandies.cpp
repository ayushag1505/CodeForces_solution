#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>> n;
        int a[n] ;
        int evensum= 0 ;
        int oddsum= 0 ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            if(a[i]%2==0) evensum+= a[i] ;
            else oddsum+= a[i] ;
        }
        if(evensum> oddsum) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}