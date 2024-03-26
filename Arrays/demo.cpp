#include<bits/stdc++.h>
using namespace std;

int main(){

unordered_map<int,pair<int,int>>mp;

for(int i=0;i<3;i++){
    mp[i].first = i+1;
    mp[i].second = i+2;
}

for(int i=0;i<3;i++){
    cout<<i<<" "<<mp[i].first<<" "<<mp[i].second<<endl;
     
}
cout<<endl;

for(auto i = mp.begin();i!=mp.end();i++){
    cout<<i->first<<" "<<i->second.first<<" "<<i->second.second<<endl;
}
cout<<endl;

unordered_map<int ,vector<int>>mpv;

for(int i=2;i<=4;i++){

    for(int j =i;j<=i*10;j+=i){
        
        mpv[i].push_back(j);
    }
}

for(int i=2;i<=4;i++){

    for(int j =0;j<10;j++)
    cout<<mpv[i][j]<<" ";

    cout<<endl;
}


    return 0;
}