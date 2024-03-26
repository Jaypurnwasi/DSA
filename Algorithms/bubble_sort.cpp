// O(n) for best case else O(n^2)

#include <bits/stdc++.h>
using namespace std;

int main(){

int n =7;
int arr[n] = {6,3,77,8,0,1,2};

bool check = false;
for(int i=0;i<n;i++){
    for(int j=0;j<n-i-1;j++){
    if(arr[j]>arr[j+1])
    swap(arr[j],arr[j+1]);
    check = true;
    }
    if(check==false)
    break;
}
for(int i:arr)
cout<<i<<" ";


    return 0;
}
