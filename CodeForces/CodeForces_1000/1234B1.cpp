#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);

    int n, k ;
    cin>>n >>k ;
    
    int a[n] ;
    unordered_map<int, bool>mp ;
    for(int i=0; i<n; i++) {
        cin>>a[i] ;
        mp[a[i]] = false ;
    }
    
    queue<int>q ;
    
    for(int i=0; i<n; i++){
        if(q.size() == k and mp[a[i]] == false){
            mp[q.front()] = false ;
            q.pop() ;
            q.push(a[i]) ;
            mp[a[i]] = true ;
        }
        else if(mp[a[i]] == false){
            q.push(a[i]) ;
            mp[a[i]] = true ;
        }
    }
    
    cout<<q.size() <<"\n" ;
    stack<int>st ;
    while(q.size()){
        st.push(q.front()) ;
        q.pop() ;
    }

    while(st.size()){
        cout<<st.top() <<" " ;
        st.pop() ;
    }
        
    return 0 ;
}