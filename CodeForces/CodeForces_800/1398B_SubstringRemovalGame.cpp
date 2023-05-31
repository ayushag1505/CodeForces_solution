#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        string s ;
        cin>>s ;
        int n=s.size() ;
        vector<int>ans ;
        int counter= 0 ;
        for(int i=0; i<n; i++){
            if(s[i]=='1') counter++ ;
            else{
                if(counter!=0){
                    ans.push_back(counter) ;
                    counter=0 ;
                }
            }
        }
        if(counter!= 0 )ans.push_back(counter) ;
        int res= 0 ;
        sort(ans.begin(), ans.end()) ;
        reverse(ans.begin(), ans.end()) ;
        for(int i=0; i<ans.size(); i+=2){
            res+= ans[i] ;
        }
        cout<<res ;
        cout<<"\n" ;
        
    }
    return 0 ;
}