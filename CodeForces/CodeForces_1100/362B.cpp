#include<bits/stdc++.h>
using namespace std ;


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int n, m ;
    cin>>n >>m ;
    
    vector<int>arr ;
    for(int i=0; i<m; i++){
        int x ;
        cin>>x ;
        arr.push_back(x) ;
    }
    
    if(m==0) cout<<"YES" ;
    else{
        sort(arr.begin(), arr.end()) ;
        if(arr[0] == 1 or arr[m-1] == n) cout<<"NO" ;
        else{
            bool flag = true ;

            for(int i=1; i<m-1; i++){
                if(arr[i] - arr[i-1] == 1 and arr[i+1] - arr[i] == 1){
                    flag = false ;
                    break ;
                }
            }
            
            if(flag) cout<<"YES" ;
            else cout<<"NO" ;
        }
    }
    
    
    return 0 ;
}