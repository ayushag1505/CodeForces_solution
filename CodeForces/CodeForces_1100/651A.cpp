#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int a, b ;
    cin>>a >>b ;
    
    int ans = 0 ;
    
    while((a>=1 and b>1) or (a>1 and b>=1)){
        if(a>b){
            a-=2 ;
            b++ ;
        }
        else{
            b-=2 ;
            a++ ;
        }
        ans++ ;
    }
    
    cout<<ans ;
    
    return 0 ;
}