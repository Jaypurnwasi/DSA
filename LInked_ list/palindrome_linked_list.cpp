//{ Driver Code Starts
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <stack>
using namespace std;
/* Link list Node */
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};




// } Driver Code Ends
/*
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution{
  public:
  int len(Node * head){
      int count=0;
      while(head!=NULL){
          count++;
          head = head->next;
      }
      return count;
  }
  
  Node * mid(Node * head){
      Node * slow = head;
      Node * fast =head->next;
      
      while(fast!=NULL&&fast->next !=NULL){
          fast = fast->next->next;
          slow = slow->next;
      }
      return slow;
  }
  
    //Function to check whether the list is palindrome.
    bool isPalindrome(Node *head)
    {
        //Your code here
        Node * temp = head;
        
        int n = len(temp);
        int v1[n];
        
        int i=0;
        while(temp!=NULL){
            v1[i] = temp->data;
            temp = temp->next;
            i++;
        }
        
        int s = 0,e = n-1;
        while(s<=e){
            if(v1[s]!=v1[e]){
                return false;
            }
            s++;
            e--;
        }
        
        return true;
        
        
    }
};



//{ Driver Code Starts.
/* Driver program to test above function*/
int main()
{
  int T,i,n,l,firstdata;
    cin>>T;
    while(T--)
    {
        
        struct Node *head = NULL,  *tail = NULL;
        cin>>n;
        // taking first data of LL
        cin>>firstdata;
        head = new Node(firstdata);
        tail = head;
        // taking remaining data of LL
        for(i=1;i<n;i++)
        {
            cin>>l;
            tail->next = new Node(l);
            tail = tail->next;
        }
    Solution obj;
   	cout<<obj.isPalindrome(head)<<endl;
    }
    return 0;
}


// } Driver Code Ends