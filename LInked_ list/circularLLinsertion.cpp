#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node * next;

    Node(){
        next =NULL;
        data = 0;
    }

    
    Node(int data){
        next =NULL;
        this->data = data;
    }
};

void instail(Node * & tail,int data){

    if(tail==NULL){
        Node * temp = new Node;
        temp->data = data;
        //tail = temp;                      
                tail->next = temp;
    }     

    Node * temp = new Node;
    temp->data = data;
    temp->next = tail->next;
    tail->next = temp;
    tail = temp;

}     

void print(Node * & tail){
    Node * temp = tail;

    while(temp!=tail){
        cout<<temp->data<<" ";
        temp = temp->next;
    }

}

int main(){

    Node * tail = new Node;
    tail = NULL;

    instail(tail,1);
    instail(tail,2);
    instail(tail,3);

    print(tail);


    return 0;

}
