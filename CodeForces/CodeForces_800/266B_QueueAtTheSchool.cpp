#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    int t ;
    cin>>t ;
    string s ;
    cin>>s ;
    for(int j=1; j<=t; j++){
        for(int i=0; i<s.size()-1; i++){
            if(s[i]=='B' and s[i+1]=='G'){
                s[i]='G' ;
                s[i+1]='B' ;
                i++ ;
            }
        }
    }
    cout<<s ;
    cout<<"\n" ;
    
}