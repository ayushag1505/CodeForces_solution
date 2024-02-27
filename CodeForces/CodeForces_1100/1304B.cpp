#include<bits/stdc++.h>
using namespace std ;

bool check(string& s){
    int n = s.size() ;
    
    for(int i=0; i<n/2; i++){
        if(s[i] != s[n-i-1]) return false ;
    }
    
    return true ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n, m ;
    cin>>n >>m ;
    
    string temp = "" ;
    bool flag = false ;
    
    string st[n] ;
    for(int i=0; i<n; i++){
        cin>>st[i] ;
        
        if(!flag and check(st[i])){
            temp = st[i] ;
            flag = true ;
        }
    }
    
    unordered_set<string>store ;
    for(int i=0; i<n; i++){
        string t = st[i] ;
        if(!check(t)){
            string rev =  t ;
            reverse(rev.begin(), rev.end()) ;

            bool f = false ;
            for(int j=0; j<n; j++){
                if(st[j] == rev){
                    f= true ;
                    break ;
                }
            }
            if(f){
                if(store.size() and store.find(rev) != store.end()) ;
                else if(store.size() and store.find(t) != store.end()) ;
                else store.insert(t) ;
            }
        }
    }
    
    string ans = "" ;
    
    for(auto it: store){
        ans+= it ;
    }
    
    string res= "" ;
    if(ans.size()){
        res = ans ;
        reverse(ans.begin(), ans.end()) ;
    }
    
    if(flag) ans+= temp ;
    if(res.size()) ans+= res ;
    
    cout<<ans.size() <<"\n" ;
    cout<<ans ;
    
    return 0 ;
}