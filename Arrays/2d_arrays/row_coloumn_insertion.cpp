#include<bits/stdc++.h>
#include<stdio.h>
using namespace std;

void print(int m,int n,vector<vector<int>>arr)
{
     for( int i=0;i<n;i++){
        for(int j=0;j<m;j++){
        cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()

{
    int n=3,m=3;
    vector<vector<int>>arr(n,vector<int>(m));

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cin>>arr[i][j];
    }
    // row major keep row index constant in inner loop
    
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++)
        cout<<arr[i][j]<<" ";
        cout<<endl;
    }

    // coloumn major keep coloumn index constant in inner loop use first loop for coloumn 
    // second for row

        cout<<endl;
    
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++)
        cout<<arr[j][i]<<" ";
        cout<<endl;
    }
    cout<<endl;


    print(3,3,arr);






    return 0;

}