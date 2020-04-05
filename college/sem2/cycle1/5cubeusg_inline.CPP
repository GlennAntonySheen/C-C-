#include <iostream.h>
#include <conio.h>

inline int cube(int a) { return a*a*a; }

void main() {
	clrscr();
	int a;
	cout<<"Enter a no: ";  cin>>a;
	cout<<"Its cube is "<<cube(a);
	getch();
}