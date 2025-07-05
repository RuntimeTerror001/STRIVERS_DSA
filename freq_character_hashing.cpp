#include<iostream>
using namespace std;
int main(){
    string s;
    cin>>s;

    int hash[26]  = {0};   // 26 is there because we know only lowercase letters ...to consider all characters we use 256
    for(int i =0 ; i<s.size();i++){
        hash[s[i] - 'a']++;  // in case of all characters only s[i]
    }
    int q;
    cin>>q;
    while(q--){
        char c;
        cin>>c;
        // fetch
        cout<<hash[c-'a']<<endl;
    
    }
    return 0;
}