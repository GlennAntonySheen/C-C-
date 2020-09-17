/* CPP CIRCULAR QUEUE PROGRAM */    
#include <iostream>
#include <conio.h>
using namespace std;

class CircularQueue {
    int queue[3], i, j, front, rear, queueSize, n, temp;  //n- stores no. of elements in queue
public:
    CircularQueue() {   front=0;  rear=-1;  n=0;  queueSize=sizeof(queue)/sizeof(int);  }
    void enqueue();
    void dequeue();
    void disp();
};
void CircularQueue::enqueue() {
    if (n+1>queueSize) {    //No. of elements execeds Queue's max capacity
        cout<<"OverFlow!!";  getch();
    } else {
        cout<<"Enter a number: ";  cin>>temp;
        rear = (rear+1)%queueSize;
        queue[rear]=temp;
        n++;    //Incrementing no. of elements in queue
    }
}
void CircularQueue::dequeue() {
    if (n==0) {     //No elements present in queue
        cout<<"Underflow!";  getch();
    } else {
        (++front) %= queueSize;
        n--;    //Decrementing no. of elements in queue
    }
}
void CircularQueue::disp() {    
    cout<<"|";
    for (i=front, j=0;j<n;j++, (++i)%=queueSize) {
        cout<<"\033[1;"<<(i+1)*3<<"H"<<queue[i];    //Display elements in queue with respect to their positions in queue
    }
    cout<<"\033[1;"<<queueSize*4<<"H|"<<endl;   //Display '|' after showing array
}

int main() {
    CircularQueue c;
    int ch;
    do {
        system("cls");  
        c.disp();        
        cout<<"\n1. Enqueue.\n2. Dequeue.\n3. Exit.\nEnter your choice: ";   cin>>ch;
        if (ch==1) {  c.enqueue(); }
        else if (ch==2)  {  c.dequeue();  }
    } while(ch==1 || ch==2);
    return 0;
}