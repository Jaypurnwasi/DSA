#include<bits/stdc++.h>
// basics is ignore the part whose sum gets negative 
// and keep maximun from it 
using namespace std;
int main(){
    int arr[]= {4,6,-9,3,18,-4};
    int max_sum = INT_MIN;
    int sum=0;
    for(int i=0;i<6;i++){
        sum = sum+arr[i];
        max_sum = max(sum,max_sum);
        if(sum<0)
        sum=0;
    }
    cout<<max_sum;

    return 0;
}