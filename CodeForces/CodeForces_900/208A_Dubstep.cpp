#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    string ans="" ;
    int flag=1 ;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='W' and s[i+1]=='U' and s[i+2]=='B'){
            i+=2 ;
            if(!flag) cout<<" " ;
        }
        else{
            cout<<s[i] ;
            flag= 0 ;
        }
    }
    
    return 0 ;
}