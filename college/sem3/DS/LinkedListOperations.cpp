/*  CPP PROGRAM TO PERFORM INSERTION AND DELETION WITHIN A LINKED LIST  */
#include <iostream>
#include <conio.h>
using namespace std;

class LinkedList {
    struct node {
        int data;
        node *nextNode;  //This points to the address of next node
    };
    int i;
public:
    node *start = NULL;  //This is declared in public so it can be accessed in main()
    void insert(int num, int pos);  //This func can insert as well as append a node at the end
    void remove(int pos);  //This func removes node at position 'pos'
    void display();
};
void LinkedList::insert(int num, int pos) {
    node *newNode = new node();
    newNode->data = num;
    newNode->nextNode = NULL;
    if (pos == 1) {  //Creating first node
        start = newNode;
    } else {
        node *temp = start;
        for (i=2;i<pos && temp->nextNode != NULL;i++, temp=temp->nextNode);  //Itrates till node is at position 'pos'  
        if (i+1==pos) {  //Inserting/Appending at end
             temp->nextNode = newNode;
        } else if (i==pos) {  //Simply inserting at pos
            temp->nextNode = newNode;
        } else {
            cout<<"Position not found";
        }
    }
}
void LinkedList::remove(int pos) {
    node *currentNode = new node();
    currentNode = start;
    node *temp;
    if (pos==1) {   //Deleting first node or Relinking start
        start = currentNode->nextNode;
    } else {
        for (i=1;i+1!=pos && currentNode->nextNode != NULL;i++, currentNode=currentNode->nextNode);
        if (i+1==pos) {
            currentNode->nextNode = (currentNode->nextNode)->nextNode;  
        } else {
            cout<<"Position not found";
        }
    }
}
void LinkedList::display() {
    node *currentNode = new node();
    currentNode = start;
    cout<<"LinkedList is:- ";
    while(currentNode != NULL) {
        cout<<currentNode->data<<", ";  //Show dat of current node
        currentNode=currentNode->nextNode;  //Going to next node
    }
    cout<<"\n";
}

int main() {
    int num, pos, ch, ab;
    LinkedList l;
    do {
        system("cls");
        cout<<"\tLINKED LIST OPERATIONS\nList is:- ";     l.display();
        cout<<"1. Insert.\n2. remove.\n3. Exit.\nEnter your choice: ";  cin>>ch;
        if (ch==1) { 
            if (l.start == NULL) {  cout<<"NOTE: If there is no element then position to be inserted is 1\n";   }  //Following message will show if no elements are present in list          
            cout<<"Enter number and position to insert: ";  cin>>num>>pos;
            l.insert(num, pos);
        } else if (ch==2) {
             if (l.start == NULL) {  cout<<"There is nothing to be deleted";  getch();  continue;  }  //Following message will show if no elements are present in list
            cout<<"Enter position to be removed: ";   cin>>pos;
            l.remove(pos);
        } else {
            return 0;
        }
    } while(true);
}
