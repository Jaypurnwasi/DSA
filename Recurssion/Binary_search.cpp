#include <iostream>
using namespace std;

int bs(int arr[],int s,int e,int x){
    
    int mid = (s+e)/2;
    
    if(s>e)
    return 0;
    
    if(arr[mid]==x)
    return 1;
    
    else if(arr[mid]<x)
    return bs(arr,mid+1,e,x);
    
    else
    return bs(arr,s,mid-1,x);

    
}

int main()
{
    
    int arr[5] = {1,2,3,4,5};
    
    cout<<bs(arr,0,5,4);
    
    
    
    
    return 0;
}