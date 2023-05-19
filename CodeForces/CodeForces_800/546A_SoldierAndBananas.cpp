#include<bits/stdc++.h>
using namespace std ;

int main(){
    int n, d, k ;
    cin>>n ;
    cin>>d ;
    cin>>k ;
    int totcost= 0 ;
    for(int i=1; i<=k; i++){
        totcost+= i*n ;
    }
    if(totcost>d){
        cout<<totcost -d ;
    }
    else cout<<0 ;
    
    cout<<"\n" ;
    return 0 ;
}