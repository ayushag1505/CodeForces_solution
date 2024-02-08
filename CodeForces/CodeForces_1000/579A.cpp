#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int n ;
    cin>>n ;
    
    int cnt = 0 ;
    for(int i=0; i<32; i++){
        int mask = 1<<i ;
        if(n&mask) cnt++ ;
    }
    
    cout<<cnt ;
    
    return 0 ;
}