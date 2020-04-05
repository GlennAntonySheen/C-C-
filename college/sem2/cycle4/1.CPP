#include <iostream.h>
#include <conio.h>

class complex {
		int real, imaginary;
public:
		void getdata() {
        cout << "\nEnter the real part:";
        cin >> real;
				cout << "Enter the imaginary part:";
        cin >> imaginary;
    }
		void disp() {  cout << real << "+" << imaginary << "i";  }
    void operator+(complex p);
};
void complex::operator+(complex p)  {
    real = real + p.real;
    imaginary = imaginary + p.imaginary;
}

void main() {
		clrscr();
		complex a, b;
    cout << "\n\t\tADD TWO COMPLEX OBJECTS USING BINARY OPERATOR OVERLOADING";
    cout << "\n\t\t----------------------------------------------------------";
		a.getdata();
    b.getdata();
    cout << "\nThe sum is:";
    a + b;
    a.disp();
		getch();
}