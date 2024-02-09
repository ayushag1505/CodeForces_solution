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
        
        if(a == b) cout<<0 ;
        else{
            if(a > b and (a%b != 0)) cout<<-1 ;
            else if(b > a and (b%a != 0)) cout<<-1 ;
            else{
                if(b>a) swap(a, b) ;
                long long q = a/b ;
                
                long long cnt = 0 ;
                while(q != 1){
                    if(q%8 == 0) q/= 8 ;
                    else if(q%4 == 0) q/= 4 ;
                    else if(q%2 == 0) q/= 2 ;
                    else break ;
                    cnt++ ;
                }
                
                if(q == 1) cout<<cnt ;
                else cout<<-1 ;
            }
        }
        
        
        cout<<"\n" ;
    }
    
    return 0 ;
}