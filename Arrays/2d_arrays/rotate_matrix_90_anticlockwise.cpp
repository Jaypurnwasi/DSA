
// reverse each row then take transpose for constant space 
#include<bits/stdc++.h>
using namespace std;
void rotate (vector<vector<int> >& matrix);



void rotate(vector<vector<int> >& matrix)
{
    // Your code goes here
    int n = matrix.size();
    
    int m[n][n];
    
    int i=0,j=0;
    for(int col=n-1;col>=0;col--){
        
        
        for(int row=0;row<n;row++){
            
            m[i][j] = matrix[row][col];
            j++;
        }
        i++;
        j=0;
    }
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        matrix[i][j] = m[i][j];
    }
    
}


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t; 
    while(t--)
    {
        int n;
        cin>>n; 
        vector<vector<int> > matrix(n);
        for(int i=0; i<n; i++)
        {
            matrix[i].resize(n);
            for(int j=0; j<n; j++)
                cin>>matrix[i][j]; 
        }
        rotate(matrix);
        for (int i = 0; i < n; ++i)
        {
            for(int j=0; j<n; j++)
                cout<<matrix[i][j]<<" ";
            cout<<"\n";
        }
    }
    return 0;
}


// } Driver Code Ends