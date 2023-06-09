#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string s= "" ;
        string temp ;
        cin>>temp ;
        s += temp ;
        for(int i=1; i<n-2; i++){
            string t ;
            cin>>t ;
            if(s[s.size()-1] != t[0]){
                s+= t ;
            }
            else s+= t[1] ;
        }
        if(s.size() != n) s+= 'a' ;
        cout<<s ;
        cout<<"\n" ;
    }
    return 0 ;
}