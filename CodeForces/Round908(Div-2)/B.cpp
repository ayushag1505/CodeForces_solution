#include <iostream>
#include <vector>
#include <map>

#include<bits/stdc++.h>

using namespace std ;

int main() {
    int t;
    cin >> t;

    while (t-- > 0) {
        int n;
        cin >> n;
        vector<int> a(n);
        map<int, int> freqMap;

        vector<int> b(n);
        for (int i = 0; i < n; ++i) {
            cin >> a[i];
            freqMap[a[i]]++;
        }

        int c = 0;
        for (const auto &entry : freqMap) {
            if (entry.second >= 2) {
                c++;
            }
        }

        int as = 0;
        if (c < 2) {
            cout << -1 ;
        } 
        else {
            for (int i = 0; i < n; ++i) {
                if (freqMap[a[i]] >= 2) {
                    if (as == 0) {
                        b[i] = 2 ;
                        as = 1 ;
                    } else {
                        b[i] = 3 ;
                    }
                    freqMap[a[i]] = 0 ;
                } else {
                    b[i] = 1 ;
                }
                cout << b[i] << " " ;
            }
            
        }
        cout << "\n" ;

        for(int i=0; i<1000; i++) ;
        for(int i=0; i<1000; i++) ;
    }

    return 0;
}
