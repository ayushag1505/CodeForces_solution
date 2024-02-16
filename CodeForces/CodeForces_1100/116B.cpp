#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int n, m ;
    cin>>n >>m ;
    
    char ch[n][m] ;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++) cin>>ch[i][j] ;
    }
    
    int ans = 0 ;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(ch[i][j] == 'W'){
                if(i-1 >=0 and ch[i-1][j] == 'P'){
                    ans++ ;
                    ch[i-1][j] = '.' ;
                }
                else if(j-1 >= 0 and ch[i][j-1] == 'P'){
                    ans++ ;
                    ch[i][j-1] = '.' ;
                }
                else if(j+1 < m and ch[i][j+1] == 'P'){
                    ans++ ;
                    ch[i][j+1] = '.' ;
                }
                else if(i+1 < n and ch[i+1][j] == 'P'){
                    ans++ ;
                    ch[i+1][j] = '.' ;
                }
            }
        }
    }
    
    cout<<ans ;
    
    return 0 ;
}