#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        string a, b ;
        cin>>a >>b ;
        int counter=0 ;
        for(int i=0; i<a.size(); i++){
            if(b[i]=='0') continue ;
            if(i>0 && a[i-1]=='1'){
                counter++ ;
                a[i-1]='.' ;
            }
            else if(a[i]=='0'){
                counter++ ;
                a[i]='.' ;
            }
            else if(i+1<n && a[i+1]=='1'){
                counter++ ;
                a[i+1]='.' ;
            }
        }
        cout<<counter <<"\n" ;
    }
    return 0 ;
}