#include <bits/stdc++.h>
using namespace std;

int main(){
    map<string, string> myMap;

    myMap.insert(pair<string, string>("Name 1", "Sheikh"));
    myMap.insert(pair<string, string>("Name 2", "Rubaeid"));
    myMap.insert(pair<string, string>("Name 3", "Sanjid"));
    myMap.insert(pair<string, string>("Name 4", "Piyal"));

//    for(auto m : myMap){
//        cout<< m.first<<": "<<m.second<<endl;
//    }

    for(auto i = myMap.begin(); i!=myMap.end(); i++){
        cout<< i->first<<": "<<i->second<<endl;
    }

    cout<<myMap.size()<<endl;
    myMap.erase("Name 3");

    for(auto i = myMap.begin(); i!=myMap.end(); i++){
        cout<< (*i).first<<": "<<(*i).second<<endl;
    }

    myMap.clear();
    cout<<myMap.size()<<endl;
}
