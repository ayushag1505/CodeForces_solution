#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    int ones= 0 ;
    int zeroes= 0 ;
    int cone= 0 ;
    int czero= 0 ;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='1'){
            cone++ ;
        }
        else{
            ones= max(ones, cone) ;
            cone=0 ;
        }
    }
    ones= max(ones, cone) ;
    for(int i=0; i<s.size(); i++){
        if(s[i]== '0'){
            czero++ ;
        }
        else{
            zeroes= max(zeroes, czero) ;
            czero= 0 ;
        }
    }
    zeroes = max(czero, zeroes) ;
    if(ones>= 7 or zeroes>= 7) cout<<"YES" ;
    else cout<<"NO" ;
    return 0 ;
}