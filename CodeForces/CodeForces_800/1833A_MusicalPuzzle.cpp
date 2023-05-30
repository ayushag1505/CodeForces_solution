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
        unordered_map<string, int>mp ;
        
        for(int i=0; i<n-1; i++){
            string temp= "" ;
            temp+=s[i] ;
            temp+=s[i+1] ;
            mp[temp]++ ;
        }
        cout<<mp.size() <<"\n" ;
    }
    return 0 ;
}