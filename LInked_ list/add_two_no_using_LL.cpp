//{ Driver Code Starts
// driver

#include <bits/stdc++.h>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

struct Node* buildList(int size)
{
    int val;
    cin>> val;
    
    Node* head = new Node(val);
    Node* tail = head;
    
    for(int i=0; i<size-1; i++)
    {
        cin>> val;
        tail->next = new Node(val);
        tail = tail->next;
    }
    
    return head;
}

void printList(Node* n)
{
    while(n)
    {
        cout<< n->data << " ";
        n = n->next;
    }
    cout<< endl;
}


// } Driver Code Ends


class Solution
{
    public:
    
    Node * reverse(Node * head){
        
        Node * prev = NULL,* curr = head,* next = NULL;
        
        while( curr!=NULL){
            next = curr->next ;
            curr->next =prev;
            
            prev = curr;
            curr = next;
        }
        return prev;
    }
    
    void instail(Node *  &anshead,Node *  &anstail,int digit){
        
        Node * temp = new Node(digit);
        
        if(anshead==NULL){
            //temp->data = digit;
            anshead = temp;
            anstail = temp;
        }
        else
        {
           // temp->data = digit;
            anstail->next = temp;
            anstail = temp;
            
        }
        
        
    }
    
    Node* solve( Node * f, Node * s){
        
        Node * anshead=NULL,* anstail=NULL;
        int carry =0;
        while(f!=NULL&&s!=NULL){
            
            int sum=0,digit=0;
            sum = carry + f->data + s->data;
            
            carry = sum/10;
            digit = sum%10;
            
            instail(anshead,anstail,digit);
            f = f->next;
            s = s->next;
        }
        
        while(f!=NULL){
            int sum =carry + f->data;
            int digit = sum%10;
            carry = sum/10;
            instail(anshead,anstail,digit);
            f = f->next;
            
        }
        while(s!=NULL){
            int sum =carry + s->data;
            int digit = sum%10;
            carry = sum/10;
            instail(anshead,anstail,digit);
            s= s->next;
        }
        if(carry!=0){
            instail(anshead,anstail,carry);
        }
        return anshead;
    }
    
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        
        Node * head1 = reverse(first);
        Node * head2 = reverse(second);
        
        
        
        
        Node * ans = solve(head1,head2);
        ans = reverse(ans);
        
        
        return ans;
        
        
    }
};


//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n, m;
        
        cin>>n;
        Node* first = buildList(n);
        
        cin>>m;
        Node* second = buildList(m);
        Solution ob;
        Node* res = ob.addTwoLists(first,second);
        printList(res);
    }
    return 0;
}

// } Driver Code Ends