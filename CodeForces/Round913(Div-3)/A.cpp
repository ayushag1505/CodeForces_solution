#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;

    while(t--){
        string s ;
        cin>>s ;

        int check = s[1] - '0' ;

        for(int i=1; i<=8; i++){
            if(i != check) cout<<s[0] <<i <<"\n" ;
        }

        for(char i = 'a'; i<'i'; i++){
            if(i != s[0]) cout<<i <<s[1] <<"\n" ;
        }
    }
}