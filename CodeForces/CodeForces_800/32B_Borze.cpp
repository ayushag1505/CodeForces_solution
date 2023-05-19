#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    string ans="" ;
    for(int i=0; i<s.size() ; i++){
        if(s[i]=='-' and s[i+1]=='-'){
            ans+= "2" ;
            i++ ;
        }
        else if(s[i]=='-' and s[i+1]=='.'){
            ans+= "1" ;
            i++ ;
        }
        else{
            ans+="0" ;
        }
    }
    cout<<ans <<"\n" ;
    return 0 ;
}