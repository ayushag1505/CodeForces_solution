#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        char a, b ;
        cin>>a >>b ;
        int sum=25*(a- 97) ;
        if(b > a){
            sum+= (b-97) ;
        }
        else{
            sum+= (b-96) ;
        }
        
        cout<<sum <<"\n" ;
    }
    return 0 ;
}