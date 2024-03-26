	#include<iostream>
    using namespace std;

    void pushZerosToEnd(int arr[], int n) {
	    // code here
	    int i,j=0,brr[n];
	    for(i=0;i<n;i++){
	        if(arr[i]!=0){
	            brr[j] = arr[i];
	            j++;
	        }
	        
	    }
	    for(i=j;i<n;i++){
	        brr[i] = 0;
	        
	    }
	    for(i=0;i<n;i++)
	    arr[i] =brr[i];
        for(i=0;i<n;i++)
        cout<<arr[i]<<" ";

	    
	}

    int main(){

        int n;
        cin>>n;
        int arr[n];
        int i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        pushZerosToEnd(arr,n);

        return 0;

    }