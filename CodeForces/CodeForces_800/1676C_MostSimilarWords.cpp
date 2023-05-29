#include<bits/stdc++.h>
using namespace std ;

long long ans(string s, string t){
    long long cost= 0 ;
    for(int i=0; i<s.size(); i++){
        cost+= abs(s[i] - t[i]) ;
    }
    return cost ;
}

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int size ;
        cin>>size ;
        vector<string>store(n) ;
        for(int i=0; i<n; i++){
            cin>>store[i] ;
        }
        long long res= INT_MAX ;
        for(int i=0; i<n-1; i++){
            for(int j=i+1; j<n; j++){
                res= min(res, ans(store[i], store[j])) ;
            }
        }
        cout<<res <<"\n" ;
    }
    return 0 ;
}