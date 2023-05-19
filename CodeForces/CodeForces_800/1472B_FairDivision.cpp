#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        int sum=0, one=0, two=0 ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            sum+= a[i] ;
            if(a[i] == 1) one++ ;
            else if(a[i] == 2) two++ ;
        }
        if(sum%2 == 1) cout<<"NO" ;
        else{
            if(one==0 and two%2==1)cout<<"NO" ;
            else if(two==0)cout<<"YES" ;
            else cout<<"YES" ;
        }
        cout<<"\n" ;
    }
}