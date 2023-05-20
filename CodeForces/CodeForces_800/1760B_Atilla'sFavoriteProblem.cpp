#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        int maxi= INT_MIN ;
        for(int i=0; i<n; i++){
            maxi= max(maxi, (s[i] - 96)) ;
        }
        cout<<maxi <<"\n" ;
    }
    return 0 ;
}