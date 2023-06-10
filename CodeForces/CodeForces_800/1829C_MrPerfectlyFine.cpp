#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int ans=-1 ;
        int temp= INT_MAX ;
        int first= INT_MAX ;
        int second= INT_MAX ;
        int n ;
        cin>>n; 
        while(n--){
            int m ;
            cin>>m ;
            string s ;
            cin>>s ;
            if(s[0]=='0' and s[1]=='1') second= min(m, second) ;
            else if(s[0]=='1' and s[1]=='0') first= min(m, first) ;
            else if(s[0]=='1' and s[1]=='1') temp= min(temp, m) ;
            
        }
        if(first != INT_MAX and second != INT_MAX) ans= first + second ;
        if(temp == INT_MAX) cout<<ans ;
        else{
            if(ans==-1) cout<<temp ;
            else cout<<min(ans, temp) ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}