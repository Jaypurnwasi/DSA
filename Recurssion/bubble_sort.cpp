/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std;

void bubble_sort(int arr[],int n){
    
    if(n==0)
    return;
    
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        swap(arr[i],arr[i+1]);
    }
    
    return bubble_sort(arr,n-1);
}

int main()
{
    int arr[] ={4,6,33,66,9,1};
    bubble_sort(arr,6);
    
    for(int i=0;i<6;i++)
    cout<<arr[i]<<" ";
    return 0;
}