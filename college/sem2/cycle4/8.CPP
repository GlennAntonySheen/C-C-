#include <iostream.h>
#include <string.h>
#include <conio.h>


class String{
    char *name;
    int length;

public:
		String() {
				length = 0;
				name = new char[length + 1];
		}
		String(char *s) {
				length = strlen(s);
				name = new char[length + 1];
				strcpy(name, s);
		}
		void display() {
				cout << name << "\n";
		}
		void join(String &p, String &q);
};

void String::join(String &p, String &q) {
		length = p.length + q.length;
		delete name;
		name = new char[length + 1];
		strcpy(name, p.name);
		strcat(name, q.name);
};

void main() {
		clrscr();
		cout<<"\tCONCAT 3 STRINGS USING DYNAMIC CONSTRUCTOR\n";
		cout<<"\t------------------------------------------\n";
		char *first = "joseph";
		String name1(first), name2("louis"), name3("lagrange"), s1, s2;
		s1.join(name1, name2);
		s2.join(s1, name3);
		cout<<"The 3 names before concating:- \n";
		name1.display();
		name2.display();
		name3.display();
		cout<<"\nAfter concating:-\n";
		s2.display();
		getch();
}