#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class stud {
	int rno, std;
	char name[20];
public:
	void get() {
		cout<<"\nEnter name: ";  gets(name);
		cout<<"Enter rollno and std: ";  cin>>rno>>std;
	}
	void disp() {
		cout<<"\nName: "<<name;
		cout<<"\nRollno: "<<rno<<"\tStd: "<<std;
	}
};

void main() {
	clrscr();
	int n, i=0;
	stud s[30];
	cout<<"Enter no of students: ";  cin>>n;
	for (;i<n;i++) {
		cout<<"\nEnter details of student"<<i+1;
		s[i].get();
	}
	clrscr();
	for (i=0;i<n;i++) {
		cout<<"\n\nDetails of student"<<i+1;
		s[i].disp();
	}
	getch();
}