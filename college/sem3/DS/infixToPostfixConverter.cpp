/* CPP PROGRAM TO CONVERT INFIX TO POSTFIX */
#include <iostream>
#include <conio.h>
#include <string.h>
using namespace std;

class Postfix {
    int stringLength, opratorStackSize, i, j, top;
    char operatorStack[20]; //This is where the operatoos are stacked
public:
    Postfix() {  top=-1;  opratorStackSize=20;  }
    void toPostfix(char infixForm[25]);  //This is the major func that convers infix to postfix form
    int priorityOf(char opr);   //Returns the priority of the operator
    void push(char opr);  //Push opr to top of stack
    void pop();  //Pop from stack and display it
    int isBracketFound();  //Checks for '(' from the top of stack, return 1 if found else return 0
};
void Postfix::toPostfix(char infixForm[25]) {
    stringLength=strlen(infixForm);     //Acquire length of infixForm
    cout<<priorityOf(operatorStack[top]);  getch();
    for (i=0;i<stringLength;i++) {
        if (isalpha(infixForm[i])) {  //Element is an alphabet and it is displayed 
            cout<<infixForm[i];   
        } else if (infixForm[i]==')') {  //Element is a closing paranthesis so, every element till opening parathesis is poped
            for (;operatorStack[top]!='(';pop());
            top--;
        } else {
            if (priorityOf(infixForm[i]) > priorityOf(operatorStack[top]) || isBracketFound()) {  
                //Priority of current element is greater than element in the top of stack so, it must be simply stacked
                push(infixForm[i]);
            } else {
                //Priority of current element is lesser than element in the top of stack so, 
                //elements in stack who has greater or equal priority is poped and current element is pushed
                for (;priorityOf(infixForm[i])<=priorityOf(operatorStack[top]) && top>=0;pop());
                push(infixForm[i]);
            }
        }
    }    
    for (;top>=0;pop());    //Aftere examining every term in infixForm the leftover items in stack are poped
}
int Postfix::priorityOf(char opr) {     //Returns the priority of the operator
    if (opr=='+' || opr=='-')  {   return 1;   }
    else if (opr=='*' || opr=='/')  {   return 2;   }
    else if (opr=='^')  {   return 3;   }
    else if (opr=='(' || opr==')')  {   return 4;   }
    return 0;
}
void Postfix::push(char opr) {      //Push opr to top of stack
    if (top<opratorStackSize) {
        operatorStack[++top]=opr;
    }
}
void Postfix::pop() {     //Pop from stack and display it
    if (top>=0) {
        cout<<operatorStack[top--];
    }
}
int Postfix::isBracketFound() {      //Checks for '(' from the top of stack, return 1 if found else return 0
    for (j=top;j>=0;j--) {
        if (operatorStack[j]=='(') {  return 1;  }
    }
    return 0;
}

int main() {
    system("cls");
    Postfix p;
    char infixForm[25];
    cout<<"Enter the infix form: ";  cin>>infixForm;
    cout<<"Its postfix form is:- ";
    p.toPostfix(infixForm);
    return 0;
}