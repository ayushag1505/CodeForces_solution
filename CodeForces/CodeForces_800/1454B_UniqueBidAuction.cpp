#include<bits/stdc++.h>
using namespace std ;


int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        int a[n] ;
        map<int, int>mpp ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            mpp[a[i]]++ ;
        }
        bool flag= true ;
        for(auto it: mpp){
            if(it.second==1){
                flag = false ;
                for(int i=0; i<n; i++){
                    if(a[i]==it.first){
                        cout<<i+1; 
                        break ;
                    }
                }
                break ;
            }
        }
        if(flag)cout<<-1 ;
        cout<<"\n" ;
    }
    return 0 ;
}