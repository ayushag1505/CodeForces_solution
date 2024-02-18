#include<bits/stdc++.h>
using namespace std ;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int t ;
    cin>>t ;
    
    while(t--){
        int n ;
        cin>>n ;
        
        int one = 0 ;
        int two = 0 ;
        int three = 0 ;
        
        for(int i=0; i<n; i++){
            int x ;
            cin>>x ;
            
            if(x%3 == 1) one++ ;
            else if(x%3 == 2) two++ ;
            else three++ ;
        }
        
        int mini = min(one, two) ;
        three+= mini ;
        
        one-=mini ;
        two-=mini ;
        
        cout<<three + (one/3) + (two/3) ;
        
        cout<<"\n" ;
    }
    
    return 0 ;
}