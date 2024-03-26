#include<bits/stdc++.h>

using namespace std;
int main(){

int arr[] ={5,1,-20,7,8};
int n=5;
int i,j,sum=0,max=0;
for(i=0;i<n;i++){
    for(j=i;j<n;j++){
        sum = sum+arr[j];
        if(sum>max){
    max =sum; 
    }
    } sum=0;
    
    
}
cout<<max;


return 0;
}