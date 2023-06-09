#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        set<int>s ;
        for(int i=0; i<n; i++){
            int x ;
            cin>>x ;
            if(s.count(x)) x++ ;
            s.insert(x) ;
        }
        cout<<s.size() ;
        cout<<"\n" ;
    }
    return 0 ;
}