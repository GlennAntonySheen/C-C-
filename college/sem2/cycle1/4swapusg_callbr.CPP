#include <iostream.h>
#include <conio.h>

void swap(int &a, int &b) {
	int temp=a;
	a=b;  b=temp;
}

void main() {
	clrscr();
	int a, b;
	cout<<"Enter 2 nos: ";  cin>>a>>b;
	swap(a, b);
	cout<<"After swapping:"<<a<<" "<<b;
	getch();
}
