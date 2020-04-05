#include <conio.h>
#include <iostream.h>

void main()
{
	int i=2, j, n;
	clrscr();
	cout<<"Enter n: ";  cin>>n;
	for (cout<<"Prime nos:-";i<=n;i++) {
		for (j=2;j<i && (i%j)!=0;j++);
		if (j==i)  cout<<" "<<i;
	}
	getch();
}