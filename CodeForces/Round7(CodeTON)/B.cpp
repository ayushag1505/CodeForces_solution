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

        int aidx = -1 ;
        int bidx = -1 ;

        for(int i=0; i<n; i++){
            if(s[i] == 'A'){
                aidx = i ;
                break ;
            }
        }

        if(aidx != -1){
            for(int i=n-1; i>aidx; i--) {
                if(s[i] == 'B'){
                    bidx = i ;
                    break ;
                }
            }
        }

        if(aidx == -1 or bidx == -1) cout<<0 ;
        else cout<<bidx - aidx ;
        cout<<"\n" ;
    }
    return 0 ;
}
