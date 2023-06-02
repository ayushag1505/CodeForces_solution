#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n], b[n] ;
        for(int i=0; i<n; i++) cin>>a[i] ;
        for(int i=0; i<n; i++) cin>>b[i] ;
        int dif=INT_MAX ;
        for(int i=0; i<n; i++){
            if(b[i] != 0){
                dif= min(dif, a[i]-b[i]) ;
            }
        }
        if(dif < 0) cout<<"NO" ;
        else if(dif == INT_MAX) cout<<"YES" ;
        else{
            bool flag= true ;
            for(int i=0; i<n; i++){
                if(a[i]- b[i] > dif){
                    cout<<"NO" ;
                    flag = false ;
                    break ;
                }
                else if(b[i] != 0 and a[i]- b[i] < dif) {
                    cout<<"NO" ; 
                    flag = false ;
                    break ;
                }
            }
            if(flag) cout<<"YES" ;
            
        }
        cout<<"\n" ;
    }
    return 0 ;
}