#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        for(int i=0; i<n; i++)cin>>a[i] ;
        bool flag= true ;
        int sum= a[0] + a[1] ;
        for(int i=2; i<n; i++){
            if(sum <= a[i]){
                cout<<1 <<" " <<2 <<" " <<i+1 ;
                flag= false ;
                break ;
            }
        }
        if(flag) cout<<-1 ;
        cout<<"\n" ;
    }
    return 0 ;
}