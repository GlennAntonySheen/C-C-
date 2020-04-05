#include <conio.h>
#include <iostream.h>

void main()
{
	int n, pn=0, cn=1, nn, i=0;
	clrscr();
	cout<<"Enter n: ";  cin>>n;
	cout<<"First "<<n<<" Fibinocci:-";
	for (;n>0;n--) {
	 cout<<" "<<pn;
	 nn=pn+cn;
	 pn=cn;  cn=nn;
	}
	getch();
}