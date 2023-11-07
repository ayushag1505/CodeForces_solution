#include<bits/stdc++.h>

using namespace std ;

int main() {
    int t ;
    cin >> t ;

    while (t--) {
        int n, k ;
        cin >> n >> k ;
        vector<int> a(n) ;

        for(auto &x : a){
            cin>>x ;
        }

        int c = n - 1 ;
        int ans = 1 ;

        unordered_set<int> st ;

        for (int i = 0 ; i < k ; i++) {
            if (st.count(c)) {
                break ;
            }
            if (a[c] > n) {
                ans = 0 ;
                break ;
            }
            st.insert(c) ;
            c = (c - a[c] + n) % n ;
        }

        if (ans == 1) {
            cout << "Yes" << endl ;
        } else {
            cout << "No" << endl ;
        }
    }

    return 0 ;
}