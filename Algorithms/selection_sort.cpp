// all case (O)n^2
#include<bits/stdc++.h>
using namespace std;


int main(){
int n=7;
int arr[n] ={4,6,2,4,7,8,2};

for(int i=0;i<n-1;i++){
    for(int j=i+1;j<n;j++){

            if(arr[i]>arr[j])
            swap(arr[i],arr[j]);

    }
}

for(int i=0;i<n;i++)
cout<<arr[i]<<" ";

return 0;
}