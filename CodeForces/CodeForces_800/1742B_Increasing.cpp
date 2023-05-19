#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        unordered_map<int, int>mpp ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            mpp[a[i]]++ ;
        }
        bool flag=true ;
        for(auto it: mpp){
            if(it.second >1){
                flag= false ;
                break ;
            }
        }
        if(flag) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}