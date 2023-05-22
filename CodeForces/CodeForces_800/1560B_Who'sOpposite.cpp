#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int a, b, c ;
        cin>>a >>b >>c ;
        int dif= abs(a- b) ;
        int multi=dif*2 ;
        if(a> multi or b> multi or c> multi){
            cout<<-1 ;
        }
        else{
            int d= dif + c ;
            if(d > multi) d=c - dif ;
            cout<<d ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}