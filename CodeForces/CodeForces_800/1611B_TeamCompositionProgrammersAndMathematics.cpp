#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n, m ;
        cin>>n >>m ;
        cout<< min({n, m, (n+m)/4}) ;
        cout<<"\n" ;
    }
    return 0 ;
}