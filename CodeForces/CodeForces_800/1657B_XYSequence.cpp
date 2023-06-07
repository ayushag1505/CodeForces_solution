#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n, B, x, y ;
        cin>>n >>B >>x >>y ;
        int a[n+1] = {0} ;
        long long sum= 0 ;
        for(int i=1; i<=n; i++){
            if((a[i-1] + x) <= B and (a[i-1] - y) <= B){
                a[i] = max((a[i-1] + x), (a[i-1]-y)) ;
                sum+= a[i] ;
            }
            else if(a[i-1]+ x > B){
                a[i]= a[i-1] - y ;
                sum+= a[i] ;
            }
            else {
                a[i]= a[i-1] + x ; 
                sum+= a[i] ;
            }
        }
        cout<<sum ;
        cout<<"\n" ;
    }
    return 0 ;
}