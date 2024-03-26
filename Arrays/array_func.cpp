/*
Array is always passed by refrence so any changes made by a fucntion in array will reflect in original
array

*/

#include<iostream>
using namespace std;
void inc(int a[],int n){

    for(int i=0;i<n;i++)
    a[i]++;
}
int main(){
int n=5;
int arr[n]={1,2,3,4,5};
inc(arr,5);
    for(int i=0;i<n;i++)
    cout<<arr[i]<<endl;

return 0;
}