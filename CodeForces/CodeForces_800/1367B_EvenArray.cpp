#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        int even=0, odd=0;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            if(a[i]%2 != i%2){
                if(a[i]%2 == 1) odd++ ;
                else even++ ;
            }
        }
        if(odd != even)cout<<-1 ;
        else cout<<even ;
        cout<<"\n" ;
    }
    return 0 ;
}