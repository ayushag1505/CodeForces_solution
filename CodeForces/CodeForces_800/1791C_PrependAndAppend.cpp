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
        int counter= 0 ;
        for(int i=0; i<s.size(); i++){
            if(s[i] == s[n-i-1]){
                counter= n-i-1-i +1 ;
                break ;
            }
        }
        cout<<counter <<"\n" ;
    }
    return 0 ;
}