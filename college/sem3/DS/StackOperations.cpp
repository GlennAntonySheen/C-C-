/* CPP PROGRAM TO PERFORM STACK OPERATIONS  */
#include <iostream>
#include <conio.h>
using namespace std;

class S {
    int array[20], i, size, top;  
    /*size:-Total items the stack can hold  
      top:- Points to location of current element in stack */  
public:
    S(){  size=20;  top=-1;  }
    void push(int x);
    void pop();
    void dispStack();
};
void S::push(int x) {
   if (top>=size-1) {  
      cout<<"Overflow!";  
  } else {
      array[++top]=x;      
  }
}
void S::pop() {
  if (top<0) {  
      cout<<"Underflow!";  
  } else {
      cout<<array[top--]<<" is poped.";
  }
}
void S::dispStack() {
    cout<<"Stack is:- ";
    for (i=0;i<=top;i++) {  cout<<array[i]<<" ";   }
}

int main() {
    S s;   int ch, x;
    do {
        system("cls");
        s.dispStack();
        cout<<"\n\nPerform stack operation like:-\n1. Push\n2. Pop\n3. Exit\nEnter yout choice: ";  cin>>ch;
        if (ch==1) {  
            cout<<"Enter element to be pushed: ";  cin>>x;      
            s.push(x);
        } else if (ch==2) {  s.pop();  }
        getch();
    } while(ch==1 || ch==2);
    exit(0);
}