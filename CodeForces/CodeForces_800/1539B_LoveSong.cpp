#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int q ;
    cin>>q ;
    string s ;
    cin>>s ;
    int sum[n+1]= {0} ;
    for(int i=0; i<n; i++){
        sum[i+1]= sum[i] + (s[i]-96) ;
    }
    while(q--){
        int l, r ;
        cin>>l >>r ;
        cout<<sum[r] - sum[l-1] ;
        cout <<"\n" ;
    }
}