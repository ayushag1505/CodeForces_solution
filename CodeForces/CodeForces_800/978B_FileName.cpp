#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n ;
    cin>>n ;
    string s ;
    cin>>s ;
    int counter= 0 ;
    for(int i=0; i<s.size()-2; i++){
        if(s[i]=='x' and s[i+1]=='x' and s[i+2]=='x')counter++ ;
    }
    cout<<counter <<"\n" ;
    return 0 ;
}