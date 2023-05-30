#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int d ;
        cin>>d ;
        string x ;
        cin>>x ;
        string ans="" ;
        char add= '0' + d ;
        for(int i=0; i<n; i++){
            if(x[i] < add){
                ans+=add ;
                ans+=x[i] ;
                add= ' ' ;
            }
            else ans+=x[i] ;
        }
        
        if(add != ' ') ans+= add ;
        cout<<ans <<"\n" ;
        
    }
    return 0 ;
}