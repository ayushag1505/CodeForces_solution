#include<bits/stdc++.h>
using namespace std ;

string solve(string s){
    int n = s.size() ;
    if(s[0] >= 97 and s[0] <= 122) s[0] = (s[0] - 32) ;
    
    for(int i=1; i<n; i++){
        if(s[i] >= 65 and s[i] <= 90) s[i] = (s[i] + 32) ;
    }

    return s ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    string s ;
    cin>>s ;
    
    int n = s.size() ;
    int cnt = 0 ;
    
    for(int i=0; i<n; i++){
        if(s[i] >= 65 and s[i] <= 90) cnt++ ;
    }

    if(cnt == n){
        string temp = solve(s) ;
        temp[0] = temp[0] + 32 ;
        cout<<temp ;
    }
    else if((s[0] >= 97 and s[0] <= 122) and (cnt == n-1)) {
        cout<<solve(s) ;
    }
    else cout<<s ;
    
    return 0 ;
}