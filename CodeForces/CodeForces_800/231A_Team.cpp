#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    int counter=0 ;
    while(t--){
        int a[3] ;
        int temp=0 ;
        for(int i=0; i<3; i++){
            cin>>a[i] ;
            if(a[i]==1) temp++ ;
        }
        if(temp>=2) counter++ ;
    }
    cout<<counter <<"\n" ;
    return 0 ;
}