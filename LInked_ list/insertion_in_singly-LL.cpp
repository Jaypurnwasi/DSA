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


int main()
{

    Node * head = new Node(5);
    Node * tail = new Node;
    
    tail = head;
    
    ins_at_beg(head,25);
    ins_at_beg(head,15);

    ins_at_end(tail,100);
    ins_at_end(tail,150);
    
    ins_at_pos(head,tail,1,4);

    print(head);
    
    cout<<head->data<<" "<<tail->data<<endl;
    
    

    
    
    

    return 0;
}