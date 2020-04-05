#include <iostream.h>
#include <conio.h>

class matrix {
	int a[20][20], r, c, i, j;
public:
	void get() {   
		cout<<"Enter no of rows and cols.: ";  cin>>r>>c;
		cout<<"Enter elements:-\n";
		for (i=0;i<r;i++)    //Getting matrix
			for (j=0;j<c;j++)
				cin>>a[i][j];
	}

	void operator + (matrix b);
	void operator - (matrix b);

	void disp() {  //Display matrix
		for (i=0;i<r;i++) {
			for (j=0;j<c;j++)
				cout<<a[i][j]<<" ";
			cout<<endl;
		}
	}
};

void matrix::operator + (matrix b) {
	matrix m3;
	m3.r=r;  m3.c=c; //assigning no of rows and cols
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			m3.a[i][j]=a[i][j]+b.a[i][j];
	cout<<"\nSum of matrix is :-\n";
	m3.disp();
}

void matrix::operator - (matrix b) {
	matrix m3;
	m3.r=r;  m3.c=c; //assigning no of rows and cols
	for (i=0;i<r;i++)
		for (j=0;j<c;j++)
			m3.a[i][j]=a[i][j]-b.a[i][j];
	cout<<"\nDifference of matrix is :-\n";
	m3.disp();
}

void main() {
	clrscr();
	cout<<"\tMATRIX ADDITION OR SUBTRACTION USING '+' OR '-' RESPECTIVELY\n";
	cout<<"\t------------------------------------------------------------\n";
	matrix m1, m2;
	m1.get();   m2.get();
	cout<<"\n1. For Addition\n2. For Subtraction\nEnter your choice: ";
	cin>>ch;
	switch (ch) {
		case 1:   m1+m2;  break;
		case 2:   m1-m2;  break;
		default:  cout<<"Wrong choice.";  break;
	}
	getch();
}
