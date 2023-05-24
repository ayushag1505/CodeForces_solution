#include<bits/stdc++.h>
using namespace std ;

int main(){
    set<int>st ;
    for(int i=1; i*i<=1000000000; i++){
        st.insert(i*i) ;
    }
    for(int i=1; i*i*i<=1000000000; i++){
        st.insert(i*i*i) ;
    }
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int counter=0 ;
        for(auto it : st){
            if(it <= n)counter++ ;
        }
        cout<<counter <<"\n" ;
    }
    return 0 ;
}