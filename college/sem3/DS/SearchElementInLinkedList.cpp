/* CPP PROGRAM TO SEARCH AN ELEMENT IN LINKED LIST */
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
    int search(int num);    //Returns position of num if present else return -1
};
void List::get() {
    cout<<"Enter no of nodes: ";  cin>>n;
    if (n < 1) {  exit(1);  }   //Exits the program if entered no of nodes is zero or below 
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
int List::search(int num) {
    node *currentNode = start;    
    for (i=1;i<=n;i++) {
        if (currentNode->data == num)  {  return i;  }      //Found at position i
        currentNode = currentNode->nextNode;
    }
    return -1;   //Not found in the List
}

int main() {
    system("cls");
    int num;
    List l;
    l.get();
    cout<<"Enter number to be searched: ";  cin>>num;
    if (l.search(num) == -1) {
        cout<<"Element not found";
    } else {
        cout<<"Element -"<<num<<"- found at position "<<l.search(num);
    }
    return 0;
}