#include <iostream.h>
#include <conio.h>

int area(int l) { return l*l; }
int area(int l, int b) { return l*b; }
float area(float r) { return 3.1415*r*r; }
float area(float a, float b) { return a+b; }
float area(int b, int l) { return (l*b)/2; }

void main() {
	clrscr();
	int ch, l, b;
	float r;
	cout<<"To find area of:- \n1. Square\n2. Rectangle\n3. Circle\n4. Triangle\n5. Exit\nEnter your choice: ";  cin>>ch;
	cout<<"area is ";
	switch (ch) {
		case 1:
			cout<<"Enter side: "; cin>>l;
			area(l);  break;
		case 2:
			cout<<"Enter l & b: "; cin>>l>>b;
			area(l, b); break;
		case 3:
			cout<<"Enter r: "; cin>>r;
			area(r);    break;
		case 3:
			cout<<"Enter base and height: "; cin>>b>>l;
			area(r);    break;
		default:
			cout<<"Invalid choice :(";
			break;
	}
	getch();
}