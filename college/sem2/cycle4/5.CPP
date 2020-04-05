#include <iostream.h>
#include <conio.h>

class twice {
	int x;
public:
	void get() {  cout<<"Enter value: ";  cin>>x;  }
	void disp() {  cout<<x;  }
	void operator +();
};

void twice::operator +() {
	x*=2;   //Doubles the value of x
}

void main() {
	clrscr();
	cout<<"\tOVERLOADINY OF UNARY OPERATOR '+'\n";
	cout<<"\t---------------------------------\n";
	twice t;
	t.get();
	+t;
	cout<<"After doubling value is:- ";
	t.disp();
	getch();
}