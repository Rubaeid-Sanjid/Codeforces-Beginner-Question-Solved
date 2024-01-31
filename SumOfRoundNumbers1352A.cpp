#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, ans;
    cin>>t;

    for(int i=0; i<t; i++){
        vector<int> numbers;
        int n;
        cin>>n;
        if(n%10!=0){
            ans = n%10;
            numbers.push_back(ans);
            n -= ans;
        }
        if(n%100!=0){
            ans = n%100;
            numbers.push_back(ans);
            n -= ans;
        }
        if(n%1000!=0){
            ans = n%1000;
            numbers.push_back(ans);
            n -= ans;
        }
        if(n%10000!=0){
            ans = n%10000;
            numbers.push_back(ans);
            n -= ans;
        }
        if(n>=10000 && n%10000==0){
            numbers.push_back(n);
        }
    cout<<numbers.size()<<endl;

    for(int i=0; i<numbers.size(); i++){
        cout<<numbers[i]<<" ";
    }
    }

return 0;
}

