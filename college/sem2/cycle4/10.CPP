#include <iostream.h>
#include <conio.h>

class array {
	int *a, i, n;
public:
	array() {		a=new int[10];  }  //constructor
	void getdata() {   //get array elements
		cout<<"Enter no of elements: ";  cin>>n;
		cout<<"Enter array:- ";
		for (i=0;i<n;i++) cin>>a[i];
	}
	void showdata() {  //Display array
		cout<<"\nArray is :- ";
		for (i=0;i<n;i++) cout<<a[i]<<" ";
	}
	~array() {  delete [] a;  }  //Destructor
};

void main() {
	clrscr();
	cout<<"\tREAD AND DISPLAY N INTEGERS TO AN ARRAY USING CONSTRUCTOR\n";
	cout<<"\t---------------------------------------------------------\n";
	array a;
	a.getdata();
	a.showdata();
	getch();
}
