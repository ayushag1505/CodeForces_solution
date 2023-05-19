#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        string s ;
        cin>>s ;
        if(s.size() <= 10) cout<<s ;
        else{
            string temp="" ;
            temp+= s[0] ;
            temp+= to_string(s.size()-2) ;
            temp+= s[s.size()-1] ;
            cout<<temp ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}