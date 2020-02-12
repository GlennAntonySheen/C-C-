#include <stdio.h>
#include <conio.h>

int snake[3][50]={0}, len=4, i, x_max=80, y_max=25, x=20, y=10;
int x_mov=1, y_mov=0, ch, c=205, rnd[2];

void print_snake() { //printfirst and last character
	printf("\033[%d;%dH%c", snake[1][i], snake[0][i], snake[2][i]);
	delay(200);
	printf("\033[%d;%dH%c", snake[1][0], snake[0][0], 0);
}

void print_food() {
	rnd[0]=rand()%(x_max-5);	rnd[1]=rand()%(y_max-3);
	printf("\033[%d;%dH%c", rnd[1], rnd[0], 15);  //print food
}

void main() {
	clrscr();
	for (i=0;i<len;i++, x+=x_mov)  //initialise snake
	{  snake[0][i]=x;  snake[1][i]=y;  snake[2][i]=178;  }
	print_food();    //Print food
	for (;ch!=32;) {
		if (kbhit()) {
			ch=getch();
			if (ch=='w') { x_mov=0;  y_mov=-1;  c=178;  }
			if (ch=='d') { x_mov=1;  y_mov=0;  c=187;  }
			if (ch=='s') { x_mov=0;  y_mov=1;  c=178;  }
			if (ch=='a') { x_mov=-1;  y_mov=0;  c=178;  }
			if (ch=='n')  print_food();
		}
		for (i=0;i<(len-1);i++) {  //shift snake's position
			snake[0][i]=snake[0][i+1];
			snake[1][i]=snake[1][i+1];
			snake[2][i]=snake[2][i+1];
		}
		snake[0][i]+=x_mov;  snake[1][i]+=y_mov;  //add new head
		for (i=0;i<(len-1);i++) {
			//check wether snake is ovrelapping
			if (snake[0][i]==snake[0][len-1] && snake[1][i]==snake[1][len-1]) {
				printf("\033[%d;%dH%s", 1, x_max-10, "Game Over");
				delay(2000);   return;  //game finished
			}
			//check wether food is eaten
			if (snake[0][len-1]==rnd[0] && snake[1][len-1]==rnd[1]) {
				print_food();
			}
		}
		if (snake[0][i]<0)  snake[0][i]+=x_max;
		snake[0][i]%=x_max; snake[1][i]%=y_max;
		if (snake[1][i]<0)  snake[1][i]+=y_max;
		print_snake();
	}
}
