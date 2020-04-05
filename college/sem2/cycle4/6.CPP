#include <iostream.h>
#include <conio.h>

class complex {
	int r, i;
public:
	void get()
	{  cout<<"Enter real and imaginay part of a complex no.: ";  cin>>r>>i;  }
	void disp() {  cout<<r<<" + "<<i<<"i";  }
	void operator +(complex c);
};

void complex::operator + (complex c) {
	r+=c.r;  i+=c.i;
}

void main() {
	clrscr();
	cout<<"\tSUM OF 2 COMPLEX NUMBER USING BINARY OPERATOR\n";
	cout<<"\t---------------------------------------------\n";
	complex a, b;
	a.get();  b.get();
	cout<<"\nSum of these complex no are:- ";
	a+b;
	a.disp();
	getch();
}