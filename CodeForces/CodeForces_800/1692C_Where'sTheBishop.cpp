#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        char ch[8][8] ;
        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>ch[i][j] ;
            }
        }
        bool flag = true ;
        for(int i=1; i<7; i++){
            for(int j=1; j<7; j++){
                if(ch[i][j]=='#' and ch[i-1][j-1]=='#' and ch[i+1][j-1]=='#' and ch[i-1][j+1]=='#' and ch[i+1][j+1]=='#'){
                    cout<<i+1 <<" " <<j+1 ;
                    flag = false ;
                    break ;
                }
            }
        }
        if(flag){
            cout<<-1 <<" " <<-1 ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}