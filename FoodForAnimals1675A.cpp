#include<bits/stdc++.h>
using namespace std;

int main(){
    int t, a, b, c, x, y, i;
    cin>>t;

    for(i=0; i<t; i++){
        cin>>a>>b>>c>>x>>y;
        if((a+c >= x) && (b+c >= y) && (a+b+c >= x+y)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

//     for(i=0; i<t; i++){
//        cin>>a>>b>>c>>x>>y;
//
//        int hungry_dogs = max(0, x-a);//a is dog food, x is no. of dogs
//        int hungry_cats = max(0, y-b);
//
//        if(hungry_dogs + hungry_cats >= c){
//            cout<<"YES"<<endl;
//        }
//        else{
//            cout<<"NO"<<endl;
//        }
//    }

return 0;
}
