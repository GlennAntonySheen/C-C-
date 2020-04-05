#include <iostream.h>
#include <conio.h>

inline int sum(int a, int b) { return a+b; }

void main() {
	clrscr();
	int a, b;
	cout<<"Enter 2 nos: ";  cin>>a>>b;
	cout<<"Its sum is "<<sum(a, b);
	getch();
}