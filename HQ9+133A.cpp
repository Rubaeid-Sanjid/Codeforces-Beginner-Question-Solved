#include <bits/stdc++.h>
using namespace std;

int main(){
    string p;
    getline(cin, p);

    for(int i=0; i<p.length(); i++){
        if(p[i] == 'H' || p[i] == 'Q' || p[i] == '9'){ //|| p[i]=='+'
            cout<<"YES"<<endl;
            //break; <-- breaking out of loop
            return 0; //breaking out of function -->return
        }
    }
    cout<<"NO"<<endl;
    return 0;    //break;
}
