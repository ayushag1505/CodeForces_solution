#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t ;
    cin>>t ;
    
    while(t--){
        int n, m ;
        cin>>n >>m ;
        
        int a[n] ;
        unordered_map<int, int>mp ;
        
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            mp[a[i]]++ ;
        }
        
        int mini = 1e9 ;
        for(auto it: mp){
            int ans = 0 ;
            for(int i=0; i<n; i++){
                if(a[i] != it.first){
                    ans++ ;
                    i+= m ;
                    i-- ;
                }
            }
            mini = min(ans, mini) ;
        }
        
        cout<<mini <<"\n" ;
    }
    
    return 0 ;
}