/* The idea is to scan all the elements from right to left in an array and keep track of the maximum till now. 
When the maximum changes its value, print it.*/
#include <bits/stdc++.h>
using namespace std;
    

class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector <int> A;
        int max = a[n-1];
        A.push_back(max);
        
        for(int i=n-2;i>=0;i--){
            if(a[i]>=max)
            {
                A.push_back(a[i]);
                max = a[i];
            }
        }
        reverse(A.begin(),A.end());
        return A;
    }
};

//{ Driver Code Starts.

int main()
{
   long long t;
   cin >> t;//testcases
   while (t--)
   {
       long long n;
       cin >> n;//total size of array
        
        int a[n];
        
        //inserting elements in the array
        for(long long i =0;i<n;i++){
            cin >> a[i];
        }
        Solution obj;

        //calling leaders() function
        vector<int> v = obj.leaders(a, n);
        
        //printing elements of the vector
        for(auto it = v.begin();it!=v.end();it++){
            cout << *it << " ";
        }
        
        cout << endl;

   }
}
