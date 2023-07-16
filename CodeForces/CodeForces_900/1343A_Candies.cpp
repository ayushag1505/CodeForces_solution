#include<bits/stdc++.h>
using namespace std ;

int main() {
    int T ;
    cin>>T ;
    while( T-- ) {
        int n ;
        cin>>n ;
        int k=2 ;
        int x=1 ;
        while( true ) {
            int val = (1<<k) - 1 ;
            if( n%val==0 ) {
                x = n/val ;
                break ;
            }
            k++ ;
        }
        cout<<x<<"\n" ;
    }
}