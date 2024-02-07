#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int n, a ;
    cin>>n >>a ;
    
    if(n == 1 and a == 10) cout<<-1 ;
    else if(a!= 10) for(int i=0; i<n; i++) cout<<a ;
    else{
        cout<<1 ;
        for(int i=1; i<n; i++) cout<<0 ;
    }
    
    return 0 ;
}