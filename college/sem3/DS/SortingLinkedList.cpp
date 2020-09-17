/* CPP PROGRAM TO SORT LINKED LIST */
#include <iostream>
using namespace std;

class List {
    struct node {
        int data;
        node *nextNode;
    };
    int i, n;
    node *start = NULL;
public:
    void get();
    void sort();  
    void display();
};
void List::get() {
    cout<<"Enter no of nodes: ";  cin>>n;
    if (n < 1) {  exit(1);  }   //Exits the program if entered no. of nodes is zero or below 
    cout<<"Enter numbers: ";
    node *currentNode = new node();
    start = currentNode;
    cin>>currentNode->data;     //Reads first node
    currentNode->nextNode = NULL;
    for (i=2;i<=n;i++) {
        node *tempNode = new node();
        cin>>tempNode->data;
        tempNode->nextNode=NULL;
        currentNode->nextNode = tempNode;   //Appending tempNode to currentNode of the List
        currentNode = tempNode;
    }
}
void List::sort() {     //Sort List using Selection Sort
    node *currentNode = new node(), *followingNode = new node();
    currentNode = start;
    for (; (currentNode)->nextNode != NULL; currentNode=currentNode->nextNode) {
        for (followingNode=currentNode->nextNode; followingNode!=NULL; followingNode=followingNode->nextNode) {
            if (currentNode->data > followingNode->data)  {
                swap(currentNode->data, followingNode->data);
            }
        }
    }
}
void List::display() {
    node *currentNode = new node();
    currentNode = start;
    cout<<"LinkedList is:- ";
    while(currentNode != NULL) {
        cout<<currentNode->data<<"  ";  //Show dat of current node
        currentNode=currentNode->nextNode;  //Going to next node
    }
}

int main() {
    system("cls");
    List l;
    l.get();
    l.sort();
    l.display();
    return 0;
}