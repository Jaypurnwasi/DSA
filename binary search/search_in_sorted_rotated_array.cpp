//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    
    int pivot(int arr[],int s,int e){
        
       
        while(s<e){
             int mid = (s+e)/2;
            if(arr[mid]>=arr[0])
            s = mid+1;
            else
            e = mid;
        }
        return s;
        
    }
    int bs(int a[],int s,int e,int key){
        
        while(s<=e){
            int mid = (s+e)/2;
            if(a[mid]==key)
            return mid;
            else if(a[mid]<key)
            s = mid+1;
            else
            e = mid-1;
        }
        return -1;
        
        
    }
    int search(int A[], int l, int h, int key){
        
        int piv = pivot(A,l,h);
        int size = sizeof(A)/sizeof(A[0]);
        int res;
        if(key>=A[piv]&&key<=A[h])
        res =bs(A,piv,h,key);
        else
        res = bs(A,0,piv-1,key);
        return res;
        
        
        
    }
};

//{ Driver Code Starts. 
int main() {
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n;
        int A[n];
        for(int i = 0; i < n; i++)
            cin >> A[i];
        int key;
        cin >> key;
        Solution ob;
        cout << ob.search(A, 0, n - 1, key) << endl;
    }
return 0;
}
// } Driver Code Ends