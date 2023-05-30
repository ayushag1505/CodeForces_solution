#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        char a[n][n] ;
        int counter= 0 ;
        int x1, y1 ;
        int x2, y2 ;
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cin>>a[i][j] ;
                if(a[i][j] == '*'){
                    counter++ ;
                    if(counter == 1){
                        x1= i ;
                        y1= j ;
                    }
                    if(counter== 2){
                        x2= i ;
                        y2= j ;
                    }
                }
            }
        }
        
        
        if(y1 == y2){
            if(y1 -1 < 0){
                a[x1][y2+1]='*' ;
                a[x2][y1+1]='*' ;
            }
            else{
                a[x1][y2-1]='*' ;
                a[x2][y1-1]='*' ;
            }
        }
        else if(x1 == x2){
            if(x1 -1 < 0){
                a[x1+1][y2]='*' ;
                a[x2+1][y1]='*' ;
            }
            else{
                a[x1-1][y2]='*' ;
                a[x2-1][y1]='*' ;
            }
        }
        else{
            a[x1][y2]='*' ;
            a[x2][y1]='*' ;
        }
        
        
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                cout<<a[i][j] ;
            }
            cout<<"\n" ;
        }
    }
    return 0 ;
}