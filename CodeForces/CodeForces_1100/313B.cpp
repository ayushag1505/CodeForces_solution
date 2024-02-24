#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    string s ;
    cin>>s ;
    
    int n = s.size() ;
    int a[n] = {0} ;
    int cnt = 0 ;
    for(int i=1; i<n; i++){
        if(s[i-1] == s[i]) cnt++ ;
        a[i] = cnt ;
    }
    
    int q ;
    cin>>q ;
    while(q--){
        int l, r ;
        cin>>l >>r ;
        cout<<a[r-1] - a[l-1] ;
        cout<<"\n" ; 
    }
    
    return 0 ;
}