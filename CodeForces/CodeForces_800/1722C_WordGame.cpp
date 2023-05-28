#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string a[3][n] ;
        unordered_map<string, int>mp ;
        for(int i=0; i<3; i++){
            for(int j=0; j<n; j++){
                string s ;
                cin>>s ;
                a[i][j]= s ;
                mp[a[i][j]]++ ;
            }
        }
        
        for(int i=0; i<3; i++){
            int count=0 ;
            for(int j=0; j<n; j++){
                if(mp[a[i][j]] == 1) count+=3 ;
                else if(mp[a[i][j]] == 2)count+=1 ;
            }
            cout<<count <<" " ;
        }
        
        cout<<"\n" ;
        
    }
    return 0 ;
}