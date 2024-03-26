// tail is not handled here in del positon

#include <iostream>
using namespace std;

class Node{
    public:
    
    int data;
    Node* next;
    
    Node(){
        data=0;
        next =NULL;
    }
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    
};

void ins_at_beg(Node* &head,int data){
    
    Node * temp = new Node(data);
    
    temp->next = head;
    head = temp;
    
    
}

void ins_at_end(Node * & tail , int data){
    
    Node * temp = new Node(data);
    tail->next = temp;
    tail = temp;
    
}
void ins_at_pos(Node * &head ,Node * &tail,int pos,int data){
    
    if(pos==1)
    {
        ins_at_beg(head,data);
        return;
    }
    
    Node * temp  = head;
    Node * node_to_ins = new Node(data);
    int cnt =1;
    
    while(cnt<pos-1){
    temp = temp->next;
    cnt++;
    }
    
    if(temp->next ==NULL){
        ins_at_end(tail,data);
        return;
    }
    
    node_to_ins->next = temp->next;
    temp->next = node_to_ins;

}
void print(Node * &head){
    
    Node * temp = head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}


void deletebeg( Node * &head){
    
    Node * temp = head;
    head = head->next;
    
    delete temp;
}

void deletepos(Node * &head,int pos){
    
    if(pos==1){
        deletebeg(head);
        return;
    }
    Node * prev = NULL;
    Node* curr = head;
    int cnt  = 1;
    
    while(cnt<pos){
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    prev->next = curr->next;
    curr->next = NULL;
    delete curr;
    
}

Node * find_mid(Node * head){

Node * slow = head,* fast = head->next;

while(fast!=NULL&&fast->next!=NULL){
    fast = fast->next->next;
    slow = slow->next;

}

return slow;

}

Node * reverse(Node * head){

    Node * curr = head,*prev =NULL,*fwd =NULL;

    while(curr!=NULL){
        fwd = curr->next;
        curr->next = prev;

        prev = curr;
        curr = fwd;
    }
    return prev;
}


int main()
{

    Node * head = new Node;
    Node * tail = new Node;
    
    tail = head;
    
    
    ins_at_end(tail,1);
    ins_at_end(tail,2);
    ins_at_end(tail,3);
    ins_at_end(tail,3);
    ins_at_end(tail,2);
    ins_at_end(tail,1);
    

   /*print(head);
    
    deletepos(head,5);print(head);
        cout<<tail->data<<endl;

    deletepos(head,3);print(head);
        cout<<tail->data<<endl;

    deletepos(head,2);print(head);
    cout<<tail->data<<endl;
    deletepos(head,1);

     print(head);

     */

print(head);


Node * mid = find_mid(head);

mid->next = reverse(mid->next);

print(head);
    
    
    
    
    

    

    
    
    

    return 0;
}