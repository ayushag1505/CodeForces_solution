#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t ;
    cin>>t ;
    
    while(t--){
        int n ;
        cin>>n ;
        
        if(n <= 26){
            cout<<"aa" ;
            n-=2 ;
            char ch = 'a' + (n-1) ;
            cout<<ch ;
        }
        else if(n <= 52){
            cout<<'a' ;
            n-=1 ;
            
            if(n > 26) {
                int temp = n-26 ;
                char ch = 'a' + (temp-1) ;
                cout<<ch ;
                cout<<'z' ;
            }
            else{
                cout<<'a' ;
                n-=1 ;
                char ch = 'a' + (n-1) ;
                cout<<ch ;
            }
        }
        else if(n<= 78){
            int temp = n - 52 ;
            char ch = 'a' + (temp-1) ;
            cout<<ch <<"zz" ;
        }
        
        cout<<"\n" ;
    }
    
    return 0 ;
}