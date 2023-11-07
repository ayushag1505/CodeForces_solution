#include<bits/stdc++.h>
using namespace std ;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    // freopen("input.txt","r",stdin);
    // freopen("output.txt","w",stdout);
    
    
    int t ;
    cin>>t ;
    
    while(t--){
        
        int n ;
        cin>>n ;
        
        string s ;
        cin>>s ;
        
        if(s[n-1] == 'A') cout<<"A" ;
        else cout<<"B" ;
        cout<<"\n" ; 
    }
    
    
    
    
    // int n, m, k ;
    // cin>>n >>m >>k ;
    
    // unorederd_set<pair<int, int>>st ;
    
    // while(k--){
    //     int x, y ;
    //     cin>>x >>y ;
        
    //     if(st.size() == 0) {
    //         st.insert({x, y}) ;
    //         cout<<x <<" " <<y ;
    //     }
    //     else{
    //         if(st.find({x, y}) == st.end()){
    //             cout<<x <<" " <<y ;
    //             st.insert({x, y}) ;
    //         }
    //         else{
                
    //         }
    //     }
    //     cout<<"\n" ;
    // }
    
    return 0 ;
    
}
