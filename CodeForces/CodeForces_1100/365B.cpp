#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n ;
    cin>>n ;
    
    int a[n] ;
    for(int i=0; i<n; i++) cin>>a[i] ;
    
    if(n <= 2) cout<<n ;
    else{
        int sum = a[0] + a[1] ;
        int cnt = 2 ;
        int ans = 2 ;
        
        for(int i=2; i<n; i++){
            if(sum == a[i]){
                cnt++ ;
            }
            else{
                ans = max(ans, cnt) ;
                cnt = 2 ;
            }
            sum -= a[i-2] ;
            sum += a[i] ;
        }
        
        ans = max(ans, cnt) ;
        cout<<ans ;
    }
    
    return 0 ;
}