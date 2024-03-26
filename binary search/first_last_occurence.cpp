//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    
    int fir(vector<long long>&v,int size,int key){
        
        int start =0;
        int end = size;
        int ans=-1;
        while(start<=end){
            int mid = (start+end)/2;
            
            if(v[mid]==key){
                ans = mid;
                end = mid-1;
            }
            else if(v[mid]<key)
            start = mid +1;
            
            else if(v[mid]>key)
            end = mid-1;
            
        }
        return ans;
        
    }
    
    int las(vector<long long>&v,int size,int key){
        
        int start =0;
        int end = size;
        int ans=-1;
        while(start<=end){
            int mid = (start+end)/2;
            
            if(v[mid]==key){
                ans = mid;
                start = mid+1;
            }
            else if(v[mid]<key)
            start = mid +1;
            
            else if(v[mid]>key)
            end = mid-1;
            
        }
        return ans;
        
    }
    
    
    pair<long,long> indexes(vector<long long> v, long long x)
    {
        // code here
        int size = v.size();
        int f = fir(v,size-1,x);
        int l = las(v,size-1,x);
        
        pair<int,int> p;
        p.first = f;
        p.second = l;
        return p;
        
        
    }
};

//{ Driver Code Starts.

int main()
 {
    long long t;
    cin>>t;
    while(t--)
    {
        long long n, k;
        vector<long long>v;
        cin>>n;
        for(long long i=0;i<n;i++)
        {
            cin>>k;
            v.push_back(k);
        }
        long long x;
        cin>>x;
        Solution obj;
        pair<long,long> pair = obj.indexes(v, x);
        
        if(pair.first==pair.second and pair.first==-1)
        cout<< -1 <<endl;
        else
        cout<<pair.first<<" "<<pair.second<<endl;

    }
	return 0;
}

// } Driver Code Ends