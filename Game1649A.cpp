#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        vector <int> location(n);
        for(int i=0; i<n; i++){
            cin>>location[i];
        }
        int start = 0;
        for(int i=0; i<n; i++){
            if(location[i] == 0){
                break;
            }
            start = i;
        }
        int last = n-1;
        for(int i=last; i>=0; i--){
            if(location[i] == 0){
                break;
            }
            last = i;
        }

    cout<<max(0, last-start)<<endl;
    }
return 0;
}
