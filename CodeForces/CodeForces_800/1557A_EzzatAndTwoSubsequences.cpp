#include<bits/stdc++.h>
using namespace std ;

int main(){
    ios::sync_with_stdio(false); 
    cin.tie(0); 
    cout.tie(0);
    int t ;
    cin>>t ;
    while(t--){
        double n ;
        cin>>n ;
        vector<double>a(n) ;
        double sum=0 ;
        double maxi= INT_MIN ;
        for(int i=0; i<n; i++){
            cin>>a[i] ;
            sum+= a[i] ;
            maxi= max(a[i], maxi) ;
        }
        sum= sum- maxi ;
        sum= sum/(n-1) ;
        cout<<fixed <<setprecision(9) <<(maxi + sum) ;
        cout<<"\n" ;
    }
    return 0 ;
}