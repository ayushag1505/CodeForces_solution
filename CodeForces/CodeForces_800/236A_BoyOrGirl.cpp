#include<bits/stdc++.h>
using namespace std ;

int main(){
    string s ;
    cin>>s ;
    set<char>temp ;
    for(int i=0; i<s.size(); i++){
        temp.insert(s[i]) ;
    }
    if(temp.size()%2==0){
        cout<<"CHAT WITH HER!" ;
    }
    else cout<<"IGNORE HIM!" ;
    cout<<"\n" ;
    
}