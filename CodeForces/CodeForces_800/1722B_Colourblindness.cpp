#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string s, t ;
        cin>>s >>t ;
        bool flag= true ;
        for(int i=0; i<n; i++){
            if(s[i] != t[i]){
                if((s[i]=='R' and t[i] != 'R') or (s[i]!='R' and t[i] == 'R')){
                    flag=false ;
                    break ;
                }
            }
        }
        if(flag) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;
    }
}