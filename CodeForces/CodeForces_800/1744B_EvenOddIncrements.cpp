#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n, q ;
        cin>>n >>q ;
        int a[n] ;
        int odd=0 , even=0 ;
        long long sum = 0 ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            sum+= a[i] ;
            if(a[i]%2==0) even++ ;
            else odd++ ;
        }
        while(q--){
            int type, x ;
            cin>>type >>x ;
            if(type == 0){
                if(x%2==0){
                    sum = sum + even*x ;
                }
                else{
                    sum= sum + even*x ;
                    odd= odd + even ;
                    even= 0 ;
                }
            }
            else{
                if(x%2==1){
                    sum= sum + odd*x ;
                    even= even + odd ;
                    odd= 0 ;
                }
                else{
                    sum= sum + odd*x ;
                }
            }
            cout<<sum <<"\n" ;
        }
        
    }
    return 0 ;
}