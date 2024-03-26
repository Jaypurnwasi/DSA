#include <iostream>
using namespace std;

int main() {
    
    int arr[7] = {1,2,3,4,5,6,7};
    int b[7]={0};
    int i,j=0,n=7;
    int k=n-1;
    for(i=0;i<n;i++){
        if(arr[i]%2==0){
            b[j] = arr[i];
            j++;
        }
        else{
            
            b[k] = arr[i];
            k--;
        }
        
        
    }
    
        for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    	return 0;
}

/*Efficient Approach:

The optimization for above approach is based on Lomuto’s Partition Scheme 

Maintain a pointer to the position before first odd element in the array.
Traverse the array and if even number is encountered then swap it with the first odd element.
Continue the traversal.

// CPP code to segregate even odd
// numbers in an array
#include <bits/stdc++.h>
using namespace std;

// Function to segregate even odd numbers
void arrayEvenAndOdd(int arr[], int n)
{

	int i = -1, j = 0;
	int t;
	while (j != n) {
		if (arr[j] % 2 == 0) {
			i++;

			// Swapping even and odd numbers
			swap(arr[i], arr[j]);
		}
		j++;
	}

	// Printing segregated array
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";
}

// Driver code
int main()
{
	int arr[] = { 1, 3, 2, 4, 7, 6, 9, 10 };
	int n = sizeof(arr) / sizeof(int);
	arrayEvenAndOdd(arr, n);
	return 0;
}
*/

