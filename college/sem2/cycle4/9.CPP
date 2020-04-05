#include <iostream.h>
#include <stdio.h>
#include <conio.h>

class bank {
	int accno, dp_amt, bal_amt, wt_amt;
	char name[30], ch;
public:
	bank() {  bal_amt=0;  get_details(); 	}
	void get_details() {
		cout<<"To create an account\n";
		cout<<"Enter your name: ";  gets(name);
		cout<<"Enter Account no.: ";  cin>>accno;
		cout<<"\nWould you like to deposit an ammount\n1. Now\n2. Later\nEnter your choice: ";
		cin>>ch;
		if (ch=='1') deposit();
	}
	void deposit() {
		cout<<"\nEnter ammount to deposit: ";   cin>>dp_amt;
		bal_amt+=dp_amt;
		current_balance();
		getch();
	}
	void current_balance() {	cout<<"\nYour curent balance is \x24"<<bal_amt;  }
	void withdraw() {
		if (bal_amt<500) {
			cout<<"Insufficient balance!. You need atleast \x24 \b500 to perform withdraw opperation\n\nWould you like to deposit some amount(y/n)";
			cin>>ch;
			if (ch=='y')  deposit();
		} else {
			cout<<"\nEnter amount to be withdrawed: ";  cin>>wt_amt;
			bal_amt-=wt_amt;
			current_balance();
		}
	}
};

void main() {
	clrscr();
	bank b;
	int ch;
	while(1) {
		clrscr();
		cout<<"Banking operations:-\n1. Withdraw amount\n2. Deposit amount\n3. Check balance\n4. Quit\nEnter your choice: ";
		cin>>ch;
		switch (ch) {
			case 1: b.withdraw();  break;
			case 2: b.deposit();  break;
			case 3: b.current_balance();  break;
			case 4: return;
		}
		getch();
	};
}