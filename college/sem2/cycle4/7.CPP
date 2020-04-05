#include <iostream.h>
#include <conio.h>

class Time
{
		int hours, minutes;

public:
		void getdata()
		{
				cout << "\nEnter the hours:";
				cin >> hours;
				cout << "Enter the minutes:";
				cin >> minutes;
		}
		void disp()
		{
				cout << hours << ":" << minutes;
		}
		friend Time operator+(Time &p, Time &q)
		{
				Time s1;
				s1.minutes = p.minutes + q.minutes;
				s1.hours = s1.minutes / 60;
				s1.minutes = s1.minutes % 60;
				s1.hours = s1.hours + p.hours + q.hours;
				s1.hours=s1.hours%12;
				return s1;
		}
};

void main()
{
		clrscr();
		Time a;
		Time b;
		Time c;
		cout << "\n\t\tADD TIME OBJECTS USING OPERATOR OVERLOADING";
		cout << "\n\t\t--------------------------------------------";
		a.getdata();
		b.getdata();
		c = a + b;
		cout << "\nThe sum of the Time is:";
		c.disp();
		getch();
}