
#include <iostream>

using namespace std;

class Node {
    public :
    
    
    Node * prev;
    int data;
    Node * next;
    
    Node(){
        prev = NULL;
        data = 0;
        next = NULL;
    }
     Node(int data){
        prev = NULL;
        data = data;
        next = NULL;
    }
};

void insbeg(Node * & head,Node * & tail,int data){
    
    Node * temp = new Node;
    
    if(head==NULL){
        
        temp->data = data;
        head = temp;
        tail = temp;
        
    }
    
    else{
        temp->data = data;
        head->prev = temp;
        temp-> next = head;
        head = temp;
    }
}
    
void print(Node * &head){
    
    Node * temp = head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
    
    
    
}

void insend(Node * & head,Node * & tail,int data){
    
        Node * temp = new Node;
    
    if(tail==NULL){
        
        temp->data = data;
        head = temp;
        tail = temp;
        
    }
    
    else{
        temp->data = data;
        tail->next = temp;
        temp->prev = tail;
        tail = temp;
    }
    
}
    
void inspos(Node * &head,Node * &tail,int data,int pos){
    
    if (pos==1){
        insbeg(head,tail,data);
        return;
    }
    
    int cnt =1;
    Node * temp = head;
    Node * nodetoins = new Node;
    
    while(cnt < pos-1){
        temp = temp->next;
        cnt++;
    }
    if(temp->next==NULL){
        insend(head,tail,data);
        return;
    }
    nodetoins->data = data;
    nodetoins->next = temp->next;
    nodetoins->prev = temp;
    temp->next = nodetoins;
    
    
    temp->next->prev = nodetoins;
}
    
    

int main()
{   
    
     Node * head=NULL;
     Node * tail=NULL;
    
    
    insbeg(head,tail,30);
    insbeg(head,tail,20);
    insbeg(head,tail,10);
    
        print(head);

    insend(head,tail,40);
    insend(head,tail,50);
    insend(head,tail,60);
    
        print(head);

    inspos(head,tail,15,1);
        print(head);

    inspos(head,tail,15,3);
        print(head);

    inspos(head,tail,15,9);
        print(head);

    
    

    
    

    return 0;
}