#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        for(int i=0; i<n; i++) {
            cin>>a[i] ;
        }
        int checke= a[0]%2 ;
        int checko = a[1]%2 ;
        bool flag =true ;
        for(int i=2; i<n; i++){
            if(i%2 == 0 and a[i]%2 != checke){
                flag= false ;
                break ;
            }
            else if(i%2==1 and a[i]%2 != checko){
                flag = false ;
                break ;
            }
        }
        if(flag) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}