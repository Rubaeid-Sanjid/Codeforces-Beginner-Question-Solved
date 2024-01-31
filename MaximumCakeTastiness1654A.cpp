#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector <int> cakePc(n);
        for(int i=0; i<n; i++){
        cin>>cakePc[i];
        }
        sort(cakePc.begin(), cakePc.end());

        int largeNum = cakePc.back();
        cakePc.pop_back();
        int SecondLarge = cakePc.back();
        cout<<largeNum+SecondLarge<<endl;
    }

return 0;
}
