#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        string s ;
        cin>>s ;
        int n=s.size() ;
        if(n==1 and s[0] == 'a') cout<<"YES" ;
        else{
            int idx= -1 ;
            for(int i=0; i<n; i++){
                if(s[i] == 'a'){
                    idx=i ;
                    break ;
                }
            }
            if(idx== -1) cout<<"NO"  ;
            else{
                int l=idx, r=idx ;
                int ch=98 ;
                bool flag= true ;
                while(l>=0 and r<n){
                    if(r-l+1 == n)break ;
                    if(l !=0 and s[l-1]==ch){
                        ch++ ;
                        l-- ;
                    }
                    else if(r != n-1 and s[r+1]==ch){
                        ch++ ;
                        r++ ;
                    }
                    else{
                        cout<<"NO" ;
                        flag=false ;
                        break ;
                    }
                }
                if(flag) cout<<"YES" ;
            }
        }
        cout<<"\n" ;
        
        
    }
    return 0 ;
}