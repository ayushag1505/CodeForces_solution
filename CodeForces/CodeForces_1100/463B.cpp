#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int n ;
    cin>>n ;
    
    vector<int>arr(n) ;
    for(int i=0; i<n; i++){
        cin>>arr[i] ;
    }
    
    cout<<*max_element(arr.begin(), arr.end()) ;
    
    return 0 ;
}