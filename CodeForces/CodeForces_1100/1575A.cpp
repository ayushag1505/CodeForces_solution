#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    cout.tie(nullptr);
        
    int n, m ;
    cin>>n >>m ;
    
    vector<pair<string, int>>st ;
    for(int i=0; i<n; i++){
        string temp ;
        cin>>temp ;
        
        string str = "" ;
        for(int j=0; j<m; j++){
            if(j%2 == 0) str+= temp[j] ;
            else{
                int a = 'Z' - temp[j] ;
                str+= ('A' + a) ;
            }
        }
        
        st.push_back({str, i+1}) ;
    }
    
    sort(st.begin(), st.end()) ;
    for(int i=0; i<n; i++) cout<<st[i].second <<" " ;
    
    return 0 ;
}