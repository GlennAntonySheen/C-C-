#include <iostream.h>
#include <conio.h>

int sum(int a, int b) { return a+b; }
float sum(float a, float b) { return a+b; }

void main() {
	clrscr();
	int a, b;
	float c, d;
	cout<<"Enter 2 int nos: ";  cin>>a>>b;
	cout<<"Its sum is "<<sum(a, b);
	cout<<"\nEnter 2 floating nos: ";  cin>>c>>d;
	cout<<"Its sum is "<<sum(c, d);
	getch();
}