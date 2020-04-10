#include <iostream.h>
#include <conio.h>

class A {
	int a;
public:
	A(int p) {  a=p;  }  //constructor
	void disp_A() {
		cout<<"\nA: "<<a;
	}
};

class B {
	int b;
public:
	B(int q) { b=q; }   //constructor
	void disp_B() {
		cout<<"\nB: "<<b;
	}
};

class C:public A, public B {
	int c;
public:
	C(int p,int q,int r):A(p),B(q)  { c=r; }    //constructor
	void disp_C() {
		cout<<"\nC: "<<c;
	}
};

void main() {
	clrscr();
	cout<<"\tCONSTRUCTORS IN MULTIPLE INHERITANCE\n";
	cout<<"\t------------------------------------\n";
	C c(1,2,3);
	c.disp_A();
	c.disp_B();
	c.disp_C();
	getch();
}