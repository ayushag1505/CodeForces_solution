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
    
    int ans = 0 ;
    for(int i=0; i<n; i++){
        int cnt = 1 ;
        int mini = a[i] ;
        for(int j=i-1; j>=0; j--){
            if(mini >= a[j]){
                mini = a[j] ;
                cnt++ ;
            }
            else break ;
        }
        
        mini = a[i] ;
        for(int j=i+1; j<n; j++){
            if(mini >= a[j]){
                mini = a[j] ;
                cnt++ ;
            }
            else break ;
        }
        
        ans= max(ans, cnt) ;
    }
    
    cout<<ans ;
    return 0 ;
}