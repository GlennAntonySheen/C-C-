#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class employee {
public:
		int eno;
		char name[20], des[20];
		void get() {
				cout<<"Enter the employee number: ";   cin>>eno;
				cout<<"Enter the employee name: "; 		cin>>name;
				cout<<"Enter the designation: ";     cin>>des;
		}
};

class salary : public employee {
		float bp, hra, da, pf, ns;
public:
		void get_sal_details() {
				cout<<"\nEnter the basic pay: "; 	cin>>bp;
				cout<<"Enter the HRA:"; 	cin>>hra;
				cout<<"Enter the DA: ";		cin>>da;
				cout<<"Enter the PF: "; 	cin>>pf;
		}
		void calculate() {   ns = bp + hra + da - pf;  }
		void display() {
				cout<<"\n\nEmp no.: "<<eno<<"\tName: "<<name<<"\tDesignation: "<<des;
				cout<<"\nNext salary: "<<ns;
		}
};

void main() {
		clrscr();
		cout<<"\tREAD AND DISPLAY DETAILS OF EMPLOYEE USING SINGLE INHERTANCE\n";
		cout<<"\t-----------------------------------------------------------\n";
		salary s;
		s.get();
		s.get_sal_details();
		s.calculate();
		s.display();
		getch();
}
