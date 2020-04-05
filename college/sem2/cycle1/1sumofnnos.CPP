#include <iostream.h>
#include <conio.h>

void main() {
 clrscr();
 int n, sum=0, i;
 cout<<"Enter n: ";  cin>>n;
 for (cout<<"Enter nos: ";n>0;n--) {
	 cin>>i;
	 sum+=i;
 }
 cout<<"\nSum is "<<sum;
 getch();
}