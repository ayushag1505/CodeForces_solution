#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    int upper=0 ;
    int lower=0 ;
    for(int i=0; i<s.size(); i++){
        if(s[i] <97) upper++ ;
        else lower++ ;
    }
    if(upper > lower){
        for(int i=0; i<s.size(); i++){
            if(s[i] > 90){
                s[i]-=32 ;
            }
        }
        cout<<s ;
    }
    else{
        for(int i=0; i<s.size(); i++){
            if(s[i] < 97){
                s[i]+=32 ;
            }
        }
        cout<<s ;
    }
    cout<<"\n" ;
    return 0 ;
}