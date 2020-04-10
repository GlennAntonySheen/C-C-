#include <iostream.h>
#include <conio.h>

class student {
protected:
		char name[10];
		int rollno;
public:
		void getdetails() {
				cout<<"\nEnter the name of the student: "; 	cin>>name;
				cout<<"Enter the roll no: ";		cin>>rollno;
		}
		void dispdetails() {
				cout<<"\nName: "<<name;
				cout<<"\nRollno: "<<rollno;
		}
};

class test : public student {
protected:
		int mark1, mark2, mark3;
public:
		void getmarks() {
				cout<<"Enter mark1: "; 	cin>>mark1;
				cout<<"Enter mark2: ";  cin>>mark2;
				cout<<"Enter mark3: ";  cin>>mark3;
		}
		void dispmarks() {
				cout<<"\nMark 1: "<<mark1;
				cout<<"\nMark 2: "<<mark2;
				cout<<"\nMark 3: "<<mark3;
		}
};

int main()
{
		clrscr();
		cout<<"\tMARK OF A STUDENTS USING MULTILEVEL INHERITANCE\n";
		cout<<"\t-----------------------------------------------------\n";
		test a;
		int i=0;
		//getting student details
		a.getdetails();   a.getmarks();
		//draw a line(-----------)
		for (cout<<"\n";i<80;i++)  cout<<"-";
		//displaying student details
		a.dispdetails();  a.dispmarks();
		getch();
}