#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        string s ;
        cin>>s ;

        string ans = "" ;
        int n = s.size() ;
        int bcnt = 0, cnt = 0 ;

        for(int i=n-1; i>=0; i--){
            if(s[i] == 'b') bcnt++ ;
            else if(s[i] == 'B') cnt++ ;
            else if(s[i] >=65 and s[i] <= 90){
                if(cnt > 0) {
                    cnt -- ;
                }
                else ans+= s[i] ;
            }
            else if(s[i] >=97 and s[i] <=122){
                if(bcnt > 0) bcnt-- ;
                else ans+= s[i] ;
            }

        }

        reverse(ans.begin(), ans.end()) ;
        cout<<ans ;
        cout<<"\n" ;
    }
    return 0 ;
}