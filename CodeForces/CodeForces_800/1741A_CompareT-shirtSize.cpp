#include<bits/stdc++.h>
using namespace std ;

int main(){
    int test ;
    cin>>test ;
    while(test--){
        string s, t ;
        cin>>s >>t ;
        char a= s[s.size() - 1] ;
        char b= t[t.size() - 1] ;
        if(a=='S' and b=='S'){
            if(s.size() == t.size()) cout<<"=" ;
            else if(s.size() > t.size()) cout<<"<" ;
            else cout<<">" ;
        }
        else if(a=='S' and b=='M') cout<<"<" ;
        else if(a=='M' and b=='S') cout<<">" ;
        else if(a=='L' and b=='S') cout<<">" ;
        else if(a=='S' and b=='L') cout<<"<" ;
        else if(a=='M' and b=='M') cout<<"=" ;
        else if(a=='M' and b=='L') cout<<"<" ;
        else if(a=='L' and b=='M') cout<<">" ;
        else if(a=='L' and b=='L'){
            if(s.size() == t.size()) cout<<"=" ;
            else if(s.size() > t.size()) cout<<">" ;
            else cout<<"<" ;
        }
        cout<<"\n" ;
    }
    
    return 0 ;
}