#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int a, b ;
    cin>>a >>b ;
        
    if(b%a != 0) cout<<-1 ;
    else if(a == b) cout<<0 ;
    else{
        int rem = b/a ;
        int cnt = 0 ;
        while(rem%3 == 0){
            rem/=3 ;
            cnt++ ;
        }
        while(rem%2 == 0){
            rem/= 2 ;
            cnt++ ;
        }
            
        if(rem == 1) cout<<cnt ;
        else cout<<-1 ;
            
    }

    return 0 ;
}