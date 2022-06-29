#include <iostream>
#include<conio.h>
using namespace std;


struct Node{
    int value;
     Node* link;
};
struct Node *head, *tail = NULL;

void insertEnd(int value){

    Node* new_node = new Node();

    new_node->value = value;

    new_node->link = NULL;

    if(head==NULL){
        head = new_node;
    }
        else{
            Node* temp = head;
        while( temp->link!= NULL)
        temp = temp->link;
    temp->link = new_node;
        }
}
void printlist(){
Node* temp = head;
if(temp != NULL){
   cout<<"LIST:";
   while(temp != NULL){
    cout<<temp->value<<" ";
    temp = temp->link;
   }
    cout<<endl;
} else{
cout<<"list is empty.\n";
}
};



int main()
{
   insertEnd(1);
    insertEnd(2);
    insertEnd(3);
    insertEnd(4);
    printlist();


    return 0;
}
