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
        bool flag=true ;
        for(int i=0; i<=4; i++){
            string a1= s.substr(0, i) ;
            string a2= s.substr(n-4+i) ;
            if(a1 + a2 == "2020"){
                cout<<"YES" ;
                flag= false ;
                break ;
            }
        }
        if(flag) cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}