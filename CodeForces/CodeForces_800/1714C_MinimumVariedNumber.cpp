#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int s ;
        cin>>s ;
        if(s< 10){
            cout<<s ;
        }
        else{
            int counter=9 ;
            string ans="" ;
            while(s>0){
                if(s>= counter and counter>0){
                    s-= counter ;
                    ans+= (counter + '0') ;
                }
                counter-- ;
            }
            reverse(ans.begin(), ans.end()) ;
            cout<<ans ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}