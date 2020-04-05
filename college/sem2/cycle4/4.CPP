#include <iostream.h>
#include <conio.h>

class array {
	int *a, i, n, sum;
public:
	array() {		sum=0;  a=new int[10];  }  //constructor
	void getdata() {   //get array elements
		cout<<"Enter no of elements: ";  cin>>n;
		cout<<"Enter array:- ";
		for (i=0;i<n;i++) {  cin>>a[i];  sum+=a[i];  }
	}
	void showdata() {  //Display array
		cout<<"\nArray is:- ";
		for (i=0;i<n;i++) cout<<a[i]<<" ";
		cout<<"\nIts sum is:- "<<sum;
	}
	~array() {  delete [] a;  }  //Destructor
};

void main() {
	clrscr();
	cout<<"READ, DISPLAY AND FIND SUM OF ARRAY USING CONSTRUCTOR AND DESTRUCTOR\n";
	cout<<"--------------------------------------------------------------------\n";
	array a;
	a.getdata();
	a.showdata();
	getch();
}