#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t ;
    cin>>t ;
    
    while(t--){
        string s ;
        cin>>s ;
        
        set<char>st ;
        char ch = s[0] ;
        int cnt = 1 ;
        
        for(int i=1; i<s.size(); i++){
            if(ch == s[i]) cnt++ ;
            else{
                if(cnt&1) st.insert(ch) ;
                ch = s[i] ;
                cnt = 1 ;
            }
        }
        if(cnt&1) st.insert(ch) ;
        
        
        string ans= "" ;
        for(auto it: st) ans+= it ;
        cout<<ans ;
        cout<<"\n" ;
        
    }
    
    return 0 ;
}