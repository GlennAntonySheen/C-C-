#include <iostream.h>
#include <conio.h>

class shape {
protected:
	int b, h;
public:
	void getside() {  cout<<"\nEnter b & h: ";  cin>>b>>h;  }
	virtual void area()=0;
};

class triangle:public shape {
public:
	void area() {  cout<<"Area is "<<0.5*b*h;  }
};
class rectangle:public shape {
public:
	void area() {  cout<<"Area is "<<b*h;  }
};

void main() {
	clrscr();
	cout<<"\tAREA OF DIFFERENT SHAPES USING ABSTRACT CLASS\n";
	cout<<"\t---------------------------------------------\n\n";
	int ch;
	cout<<"1. Tringle\n2. Rectangle\nEnter your choice: ";  cin>>ch;
	if (ch==1)  {
		 triangle t;	t.getside();   t.area();
	} else if (ch==2)  {
		rectangle r;   r.getside();   r.area();
	} else {
		cout<<"Wrong choice!!";
	}
	getch();
}