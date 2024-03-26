#include<iostream>
#include<vector>
using namespace std;
int maxProfit(int prices[],int size) {
        int profit=0,min=prices[0],max=0;
        for(int i=0;i<size;i++){
          if(prices[i]<min)
          {
              min = prices[i];
              
          } 
          max = prices[i]-min;
          if(max>profit)
          profit=max;

        }

        return profit;
    }
int main(){
    int arr[] = {1,2,7,8,2,6};
    int p =maxProfit(arr,6);
    cout<<p;
    return 0;
}