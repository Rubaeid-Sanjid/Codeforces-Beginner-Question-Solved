#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        char letter = 'a';
        for(auto it: s){
            letter = max(letter, it);
        }
        cout<<letter-'a'+1<<endl;
    }
}
