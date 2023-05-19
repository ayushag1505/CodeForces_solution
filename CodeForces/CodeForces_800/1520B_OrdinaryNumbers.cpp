#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>> n ;
        int counter= 0 ;
        for(int i=1; i<=9; i++){
            long long sum= i ;
            while(sum <= n){
                sum= sum*10 + i ;
                counter++ ;
            }
        }
        cout<<counter ;
        cout<<"\n" ;
    }
    return 0 ;
}