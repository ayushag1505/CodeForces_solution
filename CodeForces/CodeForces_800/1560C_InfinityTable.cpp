#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int idx= sqrt(n) ;
        while(idx*idx < n)idx++ ;
        int row=idx, col=idx ;
        int rem= n - (idx-1)*(idx-1) ;
        if(rem <= idx) row= rem ;
        else col= 2*idx - rem ;
        cout<<row <<" " <<col <<"\n" ;
    }
    return 0 ;
}