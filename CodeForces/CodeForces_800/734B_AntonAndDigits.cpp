#include<bits/stdc++.h>
using namespace std ;

int main(){
    int a, b, c, d ;
    cin>>a >>b >>c >>d ;
    int mini=0 ;
    if(a<=c and a<=d){
        mini=a ;
    }
    else if(c<=a and c<=d){
        mini=c ;
    }
    else{
        mini=d ;
    }
    long long sum= mini*256 ;
    a-=mini, c-=mini, d-=mini ;
    mini= min(a, b) ;
    sum+= mini*32 ;
    cout<<sum ;
    return 0 ;
}