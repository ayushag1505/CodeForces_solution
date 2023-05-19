#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    string t ;
    cin>> t ;
    for(int i=0; i<s.size(); i++){
        if(s[i] <97) s[i]+=32 ;
    }
    for(int i=0; i<t.size(); i++){
        if(t[i] < 97) t[i]+=32 ;
    }
    int ans=0 ;
    for(int i=0; i<s.size(); i++){
        if(s[i] > t[i]){
            ans=1 ;
            break ;
        }
        else if(s[i] < t[i]){
            ans=-1 ;
            break ;
        }
        else{
            ans=0 ;
        }
    }
    cout<<ans <<"\n" ;
}