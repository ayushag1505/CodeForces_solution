#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n, s, r ;
        cin>>n >>s >>r ;
        cout<<s-r <<" " ;
        n-- ;
        int rem= r%n ;
        int quo= r/n ;
        while(n--){
            if(rem!= 0){
                cout<<quo+1 <<" " ;
                rem-- ;
            }
            else cout<<quo <<" " ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}