#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
    
    int t ;
    cin>>t ;
    
    while(t--){
        long long r, g, b, w ;
        cin>>r >>g >>b >>w ;
        
        if(r%2 == 0 and g%2 == 0 and b%2 == 0 and w%2 == 0) cout<<"Yes" ;
        else if(r%2 == 0 and g%2 == 0 and b%2 == 0 and w%2 == 1) cout<<"Yes" ;
        else if(r%2 == 0 and g%2 == 0 and b%2 == 1 and w%2 == 0) cout<<"Yes" ;
        else if(r%2 == 0 and g%2 == 1 and b%2 == 0 and w%2 == 0) cout<<"Yes" ;
        else if(r%2 == 1 and g%2 == 0 and b%2 == 0 and w%2 == 0) cout<<"Yes" ;
        else{
            if(r and g and b){
                --r, --g, --b ;
                w+=3 ;
            }
            
            if(r%2 == 0 and g%2 == 0 and b%2 == 0 and w%2 == 0) cout<<"Yes" ;
            else if(r%2 == 0 and g%2 == 0 and b%2 == 0 and w%2 == 1) cout<<"Yes" ;
            else if(r%2 == 0 and g%2 == 0 and b%2 == 1 and w%2 == 0) cout<<"Yes" ;
            else if(r%2 == 0 and g%2 == 1 and b%2 == 0 and w%2 == 0) cout<<"Yes" ;
            else if(r%2 == 1 and g%2 == 0 and b%2 == 0 and w%2 == 0) cout<<"Yes" ;
            
            else cout<<"No" ;
        }
        
        cout<<"\n" ;
        
    }
    
    return 0 ;
}