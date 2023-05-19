#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    int one=0 ;
    int two= 0 ;
    int three= 0 ;
    for(int i=0; i<s.size(); i+=2){
        if(s[i]=='1') one++ ;
        else if(s[i]=='2') two++ ;
        else if(s[i]=='3') three++ ;
    }
    string ans= "" ;
    while(one--){
        ans+="1+" ;
    }
    while(two--){
        ans+="2+" ;
    }
    while(three--){
        ans+="3+" ;
    }
    for(int i=0; i<ans.size()-1; i++){
        cout<<ans[i] ;
    }
    cout<<"\n" ;
    
}