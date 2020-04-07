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
				cout<<"\nsRollno: "<<rollno;
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

class result : public test {
		int total;
public:
		void dispresult()
		{  cout<<"\nThe total mark is " << mark1 + mark2 + mark3 << "\n";   }
};

int main()
{
		clrscr();
		cout<<"\tTOTAL MARK OF N STUDENTS USING MULTILEVEL INHERITANCE\n";
		cout<<"\t-----------------------------------------------------\n";
		int n;
		result a[10];
		cout<<"\nEnter the no of students:- ";  cin>>n;
		for (int i=0;i<n;i++)  //getting all student details
		{  a[i].getdetails();   a[i].getmarks();  }
		for (i=0, cout<<"\n\n";i<80;i++)  cout<<"-";  //draw a line(-----------)
		for (i=0;i<n;i++)  //display details
		{  a[i].dispdetails();  a[i].dispmarks();  a[i].dispresult();  }
		getch();
}