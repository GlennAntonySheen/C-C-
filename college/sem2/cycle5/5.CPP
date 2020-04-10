#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class student {
	int rollno;
	char name[20];
public:
	void read() {
		cout<<"\nEnter rollno: ";  cin>>rollno;
		cout<<"Enter name: ";   cin>>name;
	}
	void disp() {  cout<<"\nName: "<<name<<"\nRollno: "<<rollno;  }
};

class test:public virtual student {
protected:
	int t1, t2, t3;
public:
	void get() {
		cout<<"\n\nEnter marks in 3 subjects: ";   cin>>t1>>t2>>t3;
	}
};

class sports:public virtual student {
protected:
	int spm1, spm2, spm3;
public:
	void getcc() {
		cout<<"Enter marks in sports quota: ";   cin>>spm1>>spm2>>spm3;
	}
};

class result:public test, public sports {
	int total, tot_sp;
public:
	void calc() {
		total=t1+t2+t3;
		tot_sp=spm1+spm2+spm3;
	}
	void show_result() {
		cout<<"\n\nTotal marks is "<<total;
		cout<<"\nTotal sports quota marks is "<<tot_sp;
		cout<<"\nTotal marks(+sport quota): "<<total+tot_sp;
	}
};

void main() {
	clrscr();
	cout<<"READ AND DISPLAY DETAILS OF N STUDENTS USING VIRTUAL BASE CLASS\n";
	cout<<"---------------------------------------------------------------\n";
	result r;
	int n, i;
	cout<<"\nEnter no of students: ";  cin>>n;
	for (i=0;i<n;i++) {
		r.read();  r.disp();
		r.get();  r.getcc();
		r.calc();
		r.	show_result();
	}
	getch();
}