#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n, k ;
        cin>>n >>k ;
        int a[n] ;
        for(int i=0; i<n; i++) cin>>a[i] ;
        if(k>1){
            int counter=0 ;
            for(int i=1; i<n-1; i++){
                if(a[i] > a[i-1]+ a[i+1]) counter++ ;
            }
            cout<<counter ;
        }
        else{
            cout<<(n-1)/2 ;
        }
        cout<<"\n" ;
        
    }
    return 0 ;
}