#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        string t="" ;
        int j=s.size()-1 ;
        for(int i=s.size()-1; i>=0; i--){
            if(s[i] == '0'){
                int a= (s[i-2]- '0')*10 + (s[i-1] - '0') ;
                t+= 'a' + a-1 ;
                i-=2 ;
            }
            else{
                t+= 'a' + (s[i]-'0') -1 ;
            }
        }
        reverse(t.begin() ,t.end()) ;
        cout<<t <<"\n" ;
    }
    return 0 ;
}