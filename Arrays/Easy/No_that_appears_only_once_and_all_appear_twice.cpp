//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int A[], int N){
	    
	    sort(A,A+N);
	    int i,num,flag =0;
	    for(i=0;i<N-1;i+=2){
	        if(A[i]!=A[i+1]){
	        num=A[i];
	        flag =1;
	        break;
	        }
	        
	    }
	    if(flag==0)
	    num = A[N-1];
	    return num;
	    
	    
	    
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends