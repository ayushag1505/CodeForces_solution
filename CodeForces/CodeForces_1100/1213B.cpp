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
        
        vector<int>arr(n) ;
        for(int i=0; i<n; i++) cin>>arr[i] ;
        
        int mini = arr[n-1] ;
        int ans = 0 ;
        for(int i=n-2; i>=0; i--){
            if(arr[i] > mini) ans++ ;
            mini = min(arr[i], mini) ;
        }
        
        cout<<ans ;
        cout<<"\n" ;
    }
    
    return 0 ;
}