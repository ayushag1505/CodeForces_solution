#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
      int n , k ;
      cin>>n >>k ;
      int a[n], b[n] ;
      for(int i=0; i<n; i++) cin>>a[i] ;
      for(int i=0; i<n; i++) cin>>b[i] ;
      sort(a, a+n) ;
      for(int i=0; i<n; i++){
          if(k==0) break ;
          int x= a[i] ;
          for(int j=0; j<n; j++){
              if(a[i] < b[j]){
                  int temp= a[i] ;
                  a[i] = b[j] ;
                  b[j] = temp ;
              }
          }
          if(x != a[i]) k-- ;
          
      }
      int sum=0 ;
      for(int i=0; i<n; i++) sum+= a[i] ;
      cout<<sum <<"\n" ;
    }
    return 0 ;
}