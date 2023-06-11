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
        if(s[1] == 'a'){
            string c="" ;
            for(int i=2; i<s.size(); i++){
                c+= s[i] ;
            }
            cout<<s[0] <<" " <<s[1] <<" " <<c ;
        }
        else{
            string b = "" ;
            for(int i=1; i<s.size()-1; ++i){
                b+= s[i] ;
            }
            
            cout<<s[0] <<" " <<b <<" " <<s[s.size()-1] ;
        }
        cout<<"\n" ;
    }
        
        
    return 0 ;
}