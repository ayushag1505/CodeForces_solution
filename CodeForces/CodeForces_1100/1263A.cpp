#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int t ;
    cin>>t ;
    
    while(t--){
        int a[3] ;
        cin>>a[0] >>a[1] >>a[2] ;
        
        sort(a, a+3) ;
        if(a[2] <= a[0]+a[1]) cout<< (a[0] + a[1] + a[2])/2 ;
        else cout<<a[0] + a[1] ;
        
        cout<<"\n" ;
    }
    
    return 0 ;
}