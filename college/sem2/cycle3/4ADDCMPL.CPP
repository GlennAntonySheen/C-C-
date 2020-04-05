#include <stdio.h>
#include <conio.h>

class complex {
	int real, img;
public:
	void get() {
		cout<<"Enter real and imaginary nos: ";  cin>>real>>img;
	}
	void disp() {
		cout<<real<<" + "<<img<<"i";
	}
	friend void add(complex, complex);
};

void add(complex a, complex b) {

}

void main() {
	clrscr();

	getch();
}
