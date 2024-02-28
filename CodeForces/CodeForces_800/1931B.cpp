#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t ;
    cin>>t ;
    
    while(t--){
        int n ;
        cin>>n ;
        
        int a[n] ;
        int sum = 0 ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            sum+= a[i] ;
        }
        
        int k = sum/n ;
        int rem = 0 ;
        bool flag = false ;
        
        for(int i=0; i<n; i++){
            if(a[i] > k) rem += (a[i] - k);
            else if(a[i] < k) rem-= (k - a[i]) ;
            
            if(rem < 0) {
                flag =true ;
                break ;
            }
        }
        
        if(flag) cout<<"NO" ;
        else cout<<"YES" ;
        
        cout<<"\n" ;
    }
    
    return 0 ;
}