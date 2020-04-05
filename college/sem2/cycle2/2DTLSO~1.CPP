#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class emp {
	int id, salary;
	char name[20];
public:
	void get();
	void disp();
};

void emp::get() {
	cout<<"\nEnter name: ";  gets(name);
	cout<<"Enter empid and salary: ";  cin>>id>>salary;
}
void emp::disp() {
	cout<<"\nName: "<<name;
	cout<<"\nEmpID: "<<id<<"\tSalary: "<<salary;
}


void main() {
	clrscr();
	int n, i=0;
	emp e[30];
	cout<<"Enter no of Employes: ";  cin>>n;
	for (;i<n;i++) {
		cout<<"\nEnter details of Employee"<<i+1;
		e[i].get();
	}
	clrscr();
	for (i=0;i<n;i++) {
		cout<<"\n\nDetails of Employee"<<i+1;
		e[i].disp();
	}
	getch();
}