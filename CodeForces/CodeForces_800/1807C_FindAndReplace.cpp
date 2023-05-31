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
        string e="" ;
        string o="" ;
        for(int i=0; i<n; i++){
            if(i%2 == 0) e+= s[i] ;
            else o+= s[i] ;
        }
        bool flag=true ;
        for(int i=0; i<e.size(); i++){
            for(int j=0; j<o.size(); j++){
                if(e[i] == o[j]){
                    flag = false ;
                    break ;
                }
            }
        }
        if(flag) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}