#include <iostream.h>
#include <conio.h>

int a, b;
int sum(int , int b=a);

int sum(int a, int b)  { return a+b; }

void main() {
	clrscr();
	cout<<"Enter 2 nos: ";  cin>>a>>b;
	cout<<"Find sum\nwith 2 argument: "<<sum(a, b);
	cout<<"\nsum with 1 argument: "<<sum(a);  //it will return its double
	getch();
}