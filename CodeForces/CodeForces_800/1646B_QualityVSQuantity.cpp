#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        for(int i=0; i<n; i++) cin>>a[i] ;
        sort(a, a+n) ;
        bool flag = true ;
        int i=1, j=n-1 ;
        long long sumi=a[0] ;
        long long sumj=0 ;
        while(i<j){
            if(sumi + a[i] < sumj + a[j]){
                flag= false ;
                cout<<"YES" ;
                break ;
            }
            sumi+= a[i++] ;
            sumj+= a[j--] ;
        }
        if(flag) cout<<"NO" ;
        cout<<"\n" ;
    }
    return 0 ;
}