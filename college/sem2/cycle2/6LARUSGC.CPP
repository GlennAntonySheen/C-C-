#include <iostream.h>
#include <conio.h>

class get_large {
	int a[20], n, i, l;
public:
	void get();
	void large();
	void disp() {
		cout<<"Largest no is "<<l;
	}
};
void get_large::get() {
	cout<<"Enter no of elements: ";  cin>>n;
	cout<<"Enter elements:- ";
	for (i=0;i<n;i++)   cin>>a[i];
}
void get_large::large() {
	for (i=0, l=0;i<n;i++)
		if (a[i]>l) l=a[i];
}

void main() {
	clrscr();
	get_large l;
	l.get();
	l.large();
	l.disp();
	getch();
}