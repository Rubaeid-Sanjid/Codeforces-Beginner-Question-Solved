#include <bits/stdc++.h>
using namespace std;

int main(){

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;

        vector<int> v(n);
        for(int i=0; i<n; i++){
            cin>>v[i];
        }

        vector<int>vect = v;
        sort(v.begin(), v.end());

        for(int i=0; i<n; i++){
            if(vect[i]==v[n-1]){
                cout<<vect[i]-v[n-2]<<" "; ///v[n-2] is second largest element of vector
            }
            else{
                cout<<vect[i]-v[n-1]<<" ";  ///v[n-1] is largest element of vector
            }
        }
        cout<<endl;
    }
    return 0;
}

//#include <bits/stdc++.h>
//using namespace std;
//
//int main(){
//
//    int t;
//    cin>>t;
//    while(t--){
//        int n;
//        cin>>n;
//
//        vector<int> v(n);
//        for(int i=0; i<n; i++){
//            cin>>v[i];
//        }
//
//        sort(v.begin(), v.end());
//
//        for(int i=0; i<n; i++){
//            if(v[i]==v[n-1]){
//                cout<<v[i]-v[n-2]<<" "; ///v[n-2] is second largest element of vector
//            }
//            else{
//                cout<<v[i]-v[n-1]<<" ";  ///v[n-1] is largest element of vector
//            }
//        }
//        cout<<endl;
//    }
//    return 0;
//}


