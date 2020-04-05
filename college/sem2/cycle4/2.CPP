#include <iostream.h>
#include <conio.h>

class area {
	int area;
public:
	area(int l) {  area=l*l;  }
	area(int l, int b) {  area=l*b;  }
	void disp() {  cout<<"Area is "<<area; }
};

void main() {
	clrscr();
	int ch, l, b;
	cout<<"\tCONSTRUCTOR OVERLOADING\n";
	cout<<"\t-----------------------\n";
	cout<<"Find area of:-\n1. Square\n2. Rectangle\nEnter your choice: ";
	cin>>ch;
	if (ch==1) {
		cout<<"Ente length: ";  cin>>l;
		area a(l);  a.disp();
	} else if (ch==2) {
		cout<<"Ente length and breadth: ";  cin>>l>>b;
		area a(l, b);  a.disp();
	} else {
		cout<<"Wrong choice.";
	}
	getch();
}