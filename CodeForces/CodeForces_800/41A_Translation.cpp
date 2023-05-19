#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    string t ;
    cin>>t ;
    bool flag=true ;
    for(int i=0; i<s.size(); i++){
        if(s[i] != t[t.size()-i-1]){
            flag=false ;
            break ;
        }
    }
    if(flag) cout<<"YES" ;
    else cout<<"NO" ;
    cout<<"\n" ;
    
}