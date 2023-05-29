#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        string s ;
        cin>>s ;
        set<int>st ;
        int days = 0 ;
        for(int i=0; i<s.size(); i++){
            st.insert(s[i]) ;
            if(st.size() > 3){
                days++ ;
                st.clear() ;
                st.insert(s[i]) ;
            }
        }
        if(st.size() != 0)days++ ;
        cout<<days <<"\n" ;
    }
    return 0 ;
}