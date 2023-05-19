#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string s ;
        cin>>s ;
        int a[26]= {0} ;
        for(int i=0; i<s.size(); i++){
            a[s[i] - 65]++ ;
        }
        int sum =0 ;
        for(int i=0; i<26; i++){
            if(a[i] != 0){
                sum+= a[i] + 1 ;
            }
        }
        cout<<sum <<"\n" ;
        
    }
    return 0 ;
}