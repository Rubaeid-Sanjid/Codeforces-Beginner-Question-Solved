#include <bits/stdc++.h>
using namespace std;

int main(){
    int t, n;
    cin>>t;
    while(t--){
        cin>>n;
        string s;
        cin>>s;

        int a=0, b=0, c=0, d=0, e=0;
        for(int i=0; i<n; i++){

            if(s[i] =='T'){
                a++;
            }
            else if(s[i] == 'i' ){
                 b++;
            }
            else if(s[i] == 'm'){
                c++;
            }
            else if(s[i] == 'u'){
                d++;
            }
            else if(s[i] =='r'){
                e++;
            }
        }
        if(s.length()==5 && a==1 && b==1 && c==1 && d==1 && e==1){
            cout<<"Yes"<<endl;
        }
        else{
                cout<<"No"<<endl;
            }
        }
return 0;
}
