#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n ;
    cin>>n ;
    
    vector<int>a(n) ;
    for(int i=0; i<n; i++) cin>>a[i] ;
    
    sort(a.begin(), a.end()) ;
    
    int one = a[n-1] ;
    map<int, int>mp ;
    mp[one] = 1 ;
    
    for(int i=0; i<n; i++){
        if(one%a[i] == 0 and mp[a[i]] == 0){
            mp[a[i]]++ ;
            a[i] = 0 ;
        }
    }
    
    int two = 0 ;
    for(int i=n-2; i>=0; i--){
        if(a[i] != 0){
            two = a[i] ;
            break ;
        }
    }
    
    cout<<one <<" " <<two ;
    
    return 0 ;
}