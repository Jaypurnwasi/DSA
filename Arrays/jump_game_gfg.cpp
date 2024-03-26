/*
Problem : Given an positive integer N and a list of N integers A[]. Each element in the array 
denotes the maximum length of jump you can cover. Find out if you can make it to the last index
if you start at the first index of the list.

Solution :

check if a[0]==0 then return 0 because no jump can be made
check if n==1 then return 1 because if there is only one element it is last element
then initialis a variable index to 1 assuming(because it'll be  used in max element function)
now enter a for loop from 0 to n:
    if index>=n then return 1
    check if the current element is greater than n return 1

    if a[i]==1
    simply increment the index by 1 and jump to next element

    else
    find the mex element between current index and value at current index
    if max is zero return false because no furthur jumps can be made
    else add current element to index


   
*/

#include <bits/stdc++.h>
using namespace std;



class Solution {
  public:
    int canReach(int A[], int N) {
       
       int i=0,j=0;
       if(N==1)
       return 1;
       if (A[0]==0)
       return 0;
       int index=1;
       
         for(i=0;i<N;i++){
           
           if(index>=N){
               j=1;
               break;
           }
           if(A[index-1]>=N){
               j=1;
               break;
           }
           
           if(A[i]==1){
               index++;
           }
           else{
               int x =*max_element(A+index,A+index+A[index-1]);
               
               if(x==0){
                   break;
               }
               index+=A[index-1];
               
           }
           
       }
       if(j)
       return 1;
       else
       return 0;
       
       
       
       
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        
        int A[N];
        
        for(int i=0; i<N; i++)
            cin>>A[i];

        Solution ob;
        cout << ob.canReach(A,N) << endl;
    }
    return 0;
}
