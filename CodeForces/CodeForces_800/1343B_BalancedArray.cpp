#include<bits/stdc++.h>
using namespace std ;

int main(){
    int t ;
    cin>>t ;
    while(t--){
        int n ;
        cin>>n ;
        if(n%4==2) cout<<"NO" ;
        else{
            cout<<"YES" <<"\n" ;
            int temp=n/2 ;
            int counter=2 ;
            while(temp--){
                cout<<counter <<" " ;
                counter+= 2;
            }
            temp=n/2 -1 ;
            counter=1 ;
            while(temp--){
                cout<<counter <<" " ;
                counter+= 2;
            }
            cout<<counter+ n/2 ;
        }
        cout<<"\n" ;
    }
    return 0 ;
}