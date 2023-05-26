#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a ;
    cin>>a ;
    string s ;
    cin>>s ;
    int n =0 , z=0 ;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='z')z++;
        if(s[i]=='n')n++ ;
    }
    string ans="" ;
    while(n--){
        ans+= "1 " ;
    }
    while(z--) ans+= "0 " ;
    cout<<ans ;
    cout<<"\n" ;
    return 0 ;
}