
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
    
void delbeg(Node * &head){

    Node * temp = head;

    head = head->next;
    head->prev =NULL;
    temp->next =NULL;
    delete temp;
}

void delend(Node * &tail){

    Node * temp = tail;
    tail = tail->prev;

    tail->next =NULL;
    temp->prev = NULL;
    delete temp;
    

}

void delpos(Node * &head,Node * &tail,int pos){

    if(pos==1){
        delbeg(head);
        return;
    }
    int cnt=1;

    Node * previ=NULL;
    Node * curr=head;

    while(cnt <pos){
        previ = curr;
        curr = curr->next;
        cnt++;
    }
    if(curr->next ==NULL){
        delend(tail);
        return;
    }

    previ->next = curr->next;

    curr->next->prev = previ;

    curr->prev = NULL;
    curr->next = NULL;
    delete curr;


}
    

int main()
{   
    
     Node * head=NULL;
     Node * tail=NULL;

    insend(head,tail,1);
    
    insend(head,tail,2);
    
    insend(head,tail,3);
    insend(head,tail,1);
    
    insend(head,tail,2);
    
    insend(head,tail,3);
    print(head);

    delbeg(head);
    print(head);

    delpos(head,tail,5);
    print(head);

    
    
    


    return 0;

}