/* CPP PROGRAM TO IMPLEMENT STACK USING LINKED LIST */
#include <iostream>
#include <conio.h>
using namespace std;

class List {
    struct node {
        int data;
        node *nextNode;
    };
    int i;
    node *start = NULL, *top = start;
public:
    void push(int num);
    void pop();
    void display();   //Print all elements in stack and their corresponding link to next node
};
void List::push(int num) {
    node *newNode = new node, *endNode = new node;
    newNode->data = num;    //newNode is used to stack new element to the stack
    newNode->nextNode = NULL;
    if (start == NULL) {    //True when first node is created
        start = top = newNode;
    } else {    
        top = top->nextNode = newNode;
    }
}
void List::pop() {
    if (top == NULL) {   cout<<"Stack is Empty!";  getch();  return;  }     //When stack is in underflow condition
    else if (top == start) {  cout<<top->data<<" is poped";  top = start = NULL;  getch();  return;  }      //for removig first element
    node *endNode = new node;
    for (endNode = start;(endNode->nextNode)->nextNode!=NULL;endNode=endNode->nextNode);    //Finds previous of end node
    cout<<top->data<<" is poped";  getch();
    endNode->nextNode = NULL;
    top = endNode;
}
void List::display() {
    node *currentNode = new node();
    currentNode = start;
    cout<<"Stack is:- |";
    if (start == NULL) {    //Stack in in underflow state
        cout<<"\bEmpty";
    } else {
        while(currentNode != NULL) {
            cout<<currentNode->data<<"-"<<currentNode->nextNode<<",  ";  //Show dat of current node
            currentNode=currentNode->nextNode;  //Going to next node
        }
        cout<<"\b\b\b|";    //Removing commas and spaces and '|' is displayed
    }
}

int main() {
    int ch, num;
    List l;
    do {
        system("cls");
        cout<<"\tSTACK OPERATIONS USING LINKEDLIST\n";
        l.display();    //Print all elements in stack and link to next node
        cout<<"\n1. Push.\n2. Pop.\n3. Exit.\nEnter your choice: ";  cin>>ch;
        if (ch==1) {   
            cout<<"Enter number to be pushed: ";  cin>>num;
            l.push(num);
        } else if (ch==2) {
            l.pop();
        }
    } while(ch==1 || ch==2);
    return 0;
}