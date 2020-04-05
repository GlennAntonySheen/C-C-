#include <iostream.h>
#include <conio.h>

void main() {
	clrscr();
	int *p, i=0, n;
	cout<<"Enter no of elements: ";  cin>>n;
	p=new int[n];
	for (cout<<"Enter elements:- ";i<n;i++)  cin>>p[i];
	cout<<"The elements are:- ";
	for (i=0;i<n;i++)  cout<<*(p+i);
	delete[] p;
	getch();
}
