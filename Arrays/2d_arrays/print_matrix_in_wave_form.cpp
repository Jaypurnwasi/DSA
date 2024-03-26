//{ Driver Code Starts
#include <bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
// for row wiae snake pattern 

    vector<int> snakePattern(vector<vector<int> > matrix)
    {   
        // code here
        
        int r = matrix.size();
        int c = matrix[0].size();
        
        vector<int>m;
        for(int i=0;i<r;i++){
            if(i%2==0){
            for(int j=0;j<c;j++){
                    m.push_back(matrix[i][j]);
            }
            }
            
            else{
                for(int j=c-1;j>=0;j--)
                m.push_back(matrix[i][j]);    
                }
        }
        return m;
    }

//for coloumn wise pattern

    vector<int> wavePrint(vector<vector<int>> arr, int nRows, int mCols)
{
    //Write your code here
    vector <int> res;
    for(int i=0;i<mCols;i++){
        
         if(i%2==0){
                for(int j=0;j<nRows;j++){
                    res.push_back(arr[j][i]);
                }
         }
        else{
                
            for(int j=nRows-1;j>=0;j--){
                    res.push_back(arr[j][i]);
                }

            }
        }
        return res;



    }

    int main(){


        return 0;
    }

