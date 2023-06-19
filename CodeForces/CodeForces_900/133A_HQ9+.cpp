#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    bool flag =true ;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='H' or s[i]=='Q' or s[i]=='9'){
            cout<<"YES" ;
            flag= false ;
            break ;
        }
    }
    if(flag) cout<<"NO" ;
    
    return 0 ;
}