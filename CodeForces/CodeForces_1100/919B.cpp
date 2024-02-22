#include<bits/stdc++.h>
using namespace std ;

int su(int n){
    int ans = 0 ;
    while(n > 0){
        ans+= (n%10) ;
        n/= 10 ;
    }
    
    return ans ;
}

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    vector<int>st ;
    
    for(int i=19; i<=1e8; i++){
        if(su(i) == 10){
            st.push_back(i) ;
        }
    }
    
    int k ;
    cin>>k ;
    
    cout<<st[k-1] ;
    
    return 0 ;
}