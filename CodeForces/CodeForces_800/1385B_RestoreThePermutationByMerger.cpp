#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n*2] ;
        int ans[n+1]= {0} ;
        int res[n] = {0} ;
        int j=0 ;
        for(int i=0; i<n*2; i++){
            cin>>a[i] ;
            if(ans[a[i]]==0){
                res[j]=a[i] ;
                ans[a[i]]++ ;
                j++ ;
            }
        }
        for(int i=0; i<n; i++){
            cout<<res[i] <<" " ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}