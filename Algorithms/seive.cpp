//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> sieveOfEratosthenes(int n)
    {
        // Write Your Code here
        vector<bool> v(n+1,true);
        int count=0;
        vector<int> v1;
        
        v[0] = v[1] = false;
        for(int i=2;i<=n;i++){
            
            if(v[i]){
                v1.push_back(i);
                for(int j =2*i;j<=n;j+=i)
                v[j] = false;
            }
        }
        return v1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends