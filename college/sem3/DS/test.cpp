#include <iostream>
#include <conio.h>
#include <string.h>
#include <ctype.h>
using namespace std;
class stack
{
    int stringlength, max, i, j, top, op;
    char poststack[100], prefix[100];

public:
    stack()
    {
        top = -1;
        max = 100;
    }
    void intopost(char post[]);
    int prece(char op);
    void push(char op);
    void pop();
    int isbracket();
    void posttopr();
};
void stack::intopost(char post[])
{
    stringlength = strlen(post);
    for (i = 0; i < stringlength; i++)
    {
        if (isalpha(post[i]))
        {
            cout << post[i];
        }
        else if (post[i] == ')')
        {
            for (; poststack[top] != '('; pop())
                ;
            top = top - 1;
        }
        else if (prece(post[i]) > prece(poststack[top]) || isbracket())
        {
            push(post[i]);
        }
        else
        {
            for (; prece(post[i]) <= prece(poststack[top]) && top >= 0; pop())
                ;
            push(post[i]);
        }
    }
    for (; top >= 0; pop());
}
int stack::prece(char op)
{
    if (op == '+' || op == '-')
        return 1;
    else if (op == '*' || op == '/')
        return 2;
    else if (op == '^')
        return 3;
    else if (op == '(' || op == ')')
        return 4;
    else
        return 0;
}
void stack::push(char op)
{
    if (top < max)
    {
        top = top + 1;
        poststack[top] = op;
    }
}
void stack::pop()
{
    if (top >= 0)
    {
        cout << poststack[top];
        top = top - 1;
    }
}
int stack::isbracket()
{
    for (j = top; j >= 0; j--)
    {
        if (poststack[top] == '(')
            return 1;
    }
    return 0;
}
void stack::posttopr()
{
    int i, l;
    l = strlen(poststack);
    for (i = 0; l - 1 >= i; i++)
    {
        prefix[i] = poststack[l - i - 1];
    }
    cout << "prefix form:" << prefix;
}
int main()
{
    stack s;
    int i, n;
    char inf[100], post[100];
    system("cls");
    cout << "INFIX TO POSTFIX FORM\n-----------------------------------\n";
    cout << "enter the infix form";
    cin >> inf;
    n = strlen(inf);
    for (i = 0; n - 1 >= i; i++)
    {
        post[i] = inf[n - i - 1];
    }
    post[i]='\0';
    cout << "reverse the expression" << post;
    cout << "\npostfix form is"<< " ";
    s.intopost(post);
    s.posttopr();
    getch();
    return 0;
}
