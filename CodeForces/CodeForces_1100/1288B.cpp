#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t ;
    cin>>t ;
    
    while(t--){
        long long a, b ;
        cin>>a >>b ;
        
        long long cnt = 0 ;
        for(long long i=9; i<=b; i=(i*10)+9){
            cnt++ ;
        }
        
        cout<<cnt*a ;
        cout<<"\n" ;
    }
    
    return 0 ;
}