#include <iostream.h>
#include <string.h>
#include <stdio.h>
#include <conio.h>

class string {
	char a[30];
public:
	string() {   //constructor
		cout<<"Enter the string:- ";  gets(a);
	}

	void operator == (string b);
	void operator + (string b);

	//Display string
	void disp() {  puts(a); 	}
};

void string::operator == (string b) {
	if (strcmp(a, b.a)==0) 	cout<<"Strings are same.";
	else cout<<"Strings are not same.";
}

void string::operator + (string b) {
	cout<<"\nAfter concating:- ";
	strcat(a, b.a);
	disp();
}

void main() {
	clrscr();
	string s1, s2;
	int ch;
	cout<<"\n1. To compare the strings\n2. To concat the strings\nEnter your choice: ";
	cin>>ch;
	switch (ch) {
		case 1:	s1==s2; break;
		case 2: s1+s2;  break;
		default: cout<<"Wrong choice";  break;
	}
	getch();
}