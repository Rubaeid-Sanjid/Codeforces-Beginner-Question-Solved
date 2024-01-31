#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, i;
    cin>>n;
    int sum =0;

//    vector<int> citizens;
//    for(i=0; i<n; i++){
//        cin>>citizens[i];
//    }
    int *citizens = new int [n];
    for(i=0; i<n; i++){
        cin>>citizens[i];
    }

    sort(citizens, citizens+n); //sorting must for determine maximum
    int maximum = citizens[n-1];

//    int maximum = citizens[0];
//    for(i=0; i<n; i++){
//        if(maximum<citizens[i]){
//            maximum = citizens[i];
//        }
//    }

    int result;
    for(i=0; i<n-1; i++){
        result = maximum-citizens[i];
        sum += result;
    }
    cout<<sum;

return 0;
}
