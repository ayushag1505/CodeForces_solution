#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n ;
    cin>>n ;
    
    string s ;
    cin>>s ;
    
    int a[26] = {0} ;
    for(int i=0; i<n; i++){
        if(s[i] >= 65 and s[i] <= 90) {
            a[s[i]-'A']++ ;
        }
        else a[s[i] - 'a']++ ;
    }
    
    bool flag = true ;
    for(int i=0; i<26; i++) {
        if(a[i] == 0){
            flag = false ;
            break ;
        }
    }
    
    if(flag) cout<<"YES" ;
    else cout<<"NO" ;
    
    return 0 ;
}