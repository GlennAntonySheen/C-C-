#include <iostream.h>
#include <conio.h>

void main() {
	clrscr();
	int n, i=0, a[30], tot=0;
	float avg=0;
	cout<<"Fing avg of how many nos: ";  cin>>n;
	for (cout<<"Enter nos: ";i<n;i++)
		cin>>a[i];
	for (i=0;i<n;i++) tot+=a[i];    //finding total
	cout<<"avg is "<<(float)tot/n;
	getch();
}
