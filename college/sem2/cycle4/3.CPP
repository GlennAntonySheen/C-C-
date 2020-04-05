#include <iostream.h>
#include <conio.h>

class sum {
	int ans;
public:
	sum(int a, int b, int c=0, int d=0) {  ans=a+b+c+d;  }
	//here c & d are default args with value 0

	void disp() {  cout<<"\nSum is "<<ans;  }
};

void main() {
		clrscr();
		cout<<"\tCONSTRUCTOR WITH DEFAULT ARGUMENTS\n";
		cout<<"\t----------------------------------\n";
		sum s1(1, 2, 3, 4);  s1.disp();
		sum s2(1, 2, 3);  s2.disp();
		sum s3(1, 2);  s3.disp();
		getch();
}