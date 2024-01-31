#include<bits/stdc++.h>
using namespace std ;

int main() {
    int t ;
    cin>>t ;

    while(t--){
        int n ;
        cin>>n ;

        string s ;
        cin>>s ;

        unordered_map<char, int>mp ;
        for(int i=0; i<n; i++){
            mp[s[i]]++ ;
        }
        if(mp.size() == 1) cout<<n ;
        else{
            int maxi = -1 ;
            for(auto it: mp){
                if(it.second > maxi){
                    maxi = it.second ;
                }
            }

            if(n&1){
                int half = n/2 ;
                if(maxi > half){
                    int left = n - maxi ;
                    cout<< n - (left+ left) ;
                }
                else{
                    cout<<1 ;
                }
            }
            else{
                int half = n/2 ;
                if(maxi > half){
                    int left = n - maxi ;
                    cout<< n - (left+ left) ;
                }
                else{
                    cout<<0 ;
                }
            }
        }
        cout<<"\n" ;
    }
    return 0 ;
}