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
		cout<<"Array is :- ";
		for (i=0;i<n;i++) cout<<a[i]<<" ";
	}
	~array() {  delete [] a;  }  //Destructor
};

void main() {
	clrscr();
	array a;
	a.getdata();
	a.showdata();
	getch();
}