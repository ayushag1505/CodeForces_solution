#include<bits/stdc++.h>
using namespace std ;


int main(){
    int t ;
    cin>>t ;
    while(t--){
        string s ;
        cin>>s ;
        
        unordered_map<char, int>mpp ;
        for(int i=0; i<s.size(); i++){
            mpp[s[i]]++ ;
        }
        
        int ans=0 ;
        for(auto it: mpp){
            if(it.second >=2) ans++ ;
        }
        int temp= mpp.size()- ans ;
        ans= ans + temp/2 ;
        cout<<ans <<"\n" ;
    }
    
    return 0 ;
}