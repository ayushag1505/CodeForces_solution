#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        for(int i=0; i<n; i++) a[i]=i+1 ;
        cout<<n<<"\n" ;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[j] <<" " ;
            }
            cout<<"\n" ;
            if(i < n-1) swap(a[i], a[i+1]) ;
        }
        
        
    }
    return 0 ;
}