#include <iostream.h>
#include <conio.h>

class srt {
	int a[20], n, i, j, temp;
public:
	void get();
	void sort();
	void disp();
};
void srt::get() {
	cout<<"Enter no of elements: ";  cin>>n;
	cout<<"Enter elements:- ";
	for (i=0;i<n;i++)   cin>>a[i];
}
void srt::sort() {
	for (i=0;i<n-1;i++) {
		for (j=i+1;j<n;j++) {
			 if (a[i]>a[j]) {
				 temp=a[i]; a[i]=a[j];  a[j]=temp;
			 }
		}
	}
}
void srt::disp() {
	cout<<"Array is:- ";
	for (i=0;i<n;i++)   cout<<a[i]<<" ";
}

void main() {
	clrscr();
	srt s;
	s.get();
	s.sort();
	s.disp();
	getch();
}