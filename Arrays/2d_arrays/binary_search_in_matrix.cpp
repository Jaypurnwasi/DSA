#include<bits/stdc++.h>
using namespace std;

void bs(vector<vector<int>> v,int x){

    for(int i=0;i<v.size();i++){
        int s = 0,e = v[0].size()-1;
        while(s<=e){

                int mid = s+e/2;
            if(v[i][mid] ==x)
            {
                cout<<x<<" found";
                break;
            }
            else if(x<v[i][mid])
            e = mid-1;
            else
            s = mid+1;
        }
    }
}
int main(){


    int n=3,m=3;

    vector<vector<int>>v(n,vector<int>(m));
int k=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++) 
        v[i][j] = k++;
    }
int x =1;
    bs(v,x);
    






    return 0;

}