#include <iostream.h>
#include <conio.h>

class employee {
	int emp_code;
	char name[20], desig[10];
public:
	void get_emp_dtls() {
		cout<<"Enter EMP code: ";  cin>>emp_code;
		cout<<"Enter name: ";  cin>>name;
		cout<<"Enter desig: ";  cin>>desig;
	}
	void disp_emp() {
		cout<<"\nEMP code: "<<emp_code<<"\nName: "<<name<<"\tDesig: "<<desig;
	}
};

class salary:public employee {
	int bp, ta, da, hra, pf, lic;
protected:
	int net;
public:
	void get_sal_dtls() {
		cout<<"Enter BP and TA: ";  cin>>bp>>ta;
		cout<<"Enter DA and HRA: ";  cin>>da>>hra;
		cout<<"Enter PF and LIC: ";  cin>>pf>>lic;

		net=bp+da+hra+ta-(lic-pf);
	}

};

class incentives {
	int tot_sales;
protected:
	int incent_amt;
public:
	void get_sales() {
		cout<<"\nEnter Totla Sales: ";  cin>>tot_sales;

		if (tot_sales>10000)  incent_amt=1000;
		else if (tot_sales>5000 && tot_sales<9999)  incent_amt=750;
		else if (tot_sales>2500 && tot_sales<4999)  incent_amt=500;
		else if (tot_sales>1000 && tot_sales<2499)  incent_amt=250;
	}
};

class salary_slip:public salary, public incentives {
	int tot_salary;
public:
	void sal_calc() {  tot_salary=net+incent_amt;  }
	void disp_sal_dtls() {
		cout<<"\nNet: "<<net<<"\tIncentive amount: "<<incent_amt;
		cout<<"\nTotal salary:- "<<tot_salary<<endl;
	}
};

void main() {
	clrscr();
	cout<<"\tDETAILS OF N EMPLOYEE USING HYBRID INHERITANCE\n";
	cout<<"\t----------------------------------------------\n";
	salary_slip s[10];
	int i, j, n;
	cout<<"Enter no of employee: ";  cin>>n;
	for (i=0;i<n;i++) {
		cout<<"\nEnter details of employee"<<i+1<<":-\n";
		s[i].get_emp_dtls();  s[i].get_sal_dtls();  s[i].get_sales();
		for (j=0, cout<<endl;j<80;j++)  cout<<"-";
		s[i].sal_calc();
		s[i].disp_emp();  s[i].disp_sal_dtls();
	}
	getch();
}