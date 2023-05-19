#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int a, b, c, d ;
        cin>>a >>b >>c >>d ;
        int counter= 0 ;
        if(a>c or a>d or b>c or b>d) counter++ ;
        if(c>a or c>b or d>a or d>b) counter++ ;
        if(counter==2) cout<<"YES" ;
        else cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}