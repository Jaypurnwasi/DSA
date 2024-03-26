
#include <bits/stdc++.h>

using namespace std;

int main()
{

    int arr[5] ={1,2,-1,-7,8};
    int n=5;
    
    int sum=0,max_sum=INT_MIN;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        
        if(sum>max_sum){
            max_sum = sum;
        }
        
        if(sum<0)
        sum=0;
    }
    cout<<max_sum;



    return 0;
}