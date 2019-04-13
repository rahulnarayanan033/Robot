#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT,gm,i;
	initgraph(&gd,&gm,"C:\\TC\\BGI");
	for(i=0;i<500;i++)
	{
	setcolor(WHITE);     //for nose
	line(345+i,45,335+i,55);

	line(345+i,45,355+i,55);

	line(335+i,55,355+i,55);

	setcolor(RED);
	line(360+i,70,330+i,70);           //for mouth
	setcolor(WHITE);
	rectangle(300+i,81,400+i,9);       //for face
	setcolor(WHITE);
	setfillstyle(SOLID_FILL,WHITE);    //for eyes
	circle(320+i,25,12);
	floodfill(320+i,25,WHITE);
	circle(366+i,25,12);
	floodfill(366+i,25,WHITE);
	setcolor(WHITE);
	rectangle(197+i,300,500+i,100);    //for body
	settextstyle(6,0,3);
	outtextxy(400+i,140,"c robot");
	circle(340+i,140,10);              //for buttons
	circle(340+i,190,10);
	circle(340+i,250,10);
	line(500+i,100,600+i,200);         //for left hand
	line(500+i,165,564+i,220);
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(590+i,220,25);
	floodfill(590+i,220,YELLOW);
	setcolor(WHITE);
	line(310+i,81,310+i,100);          //for neck
	line(390+i,81,390+i,100);
	line(197+i,100,100+i,193);        //for right hand
	line(197+i,165,112+i,240);
	setcolor(YELLOW);
	setfillstyle(SOLID_FILL,YELLOW);
	circle(95+i,220,25);
	floodfill(95+i,220,YELLOW);
	setcolor(WHITE);
	line(300+i,300,300+i,400);         //for legs
	line(400+i,300,400+i,400);
	line(400+i,400,450+i,400);
	line(450+i,400,450+i,450);
	line(450+i,450,400+i,450);
	line(400+i,450,400+i,400);
	line(300+i,400,250+i,400);
	line(250+i,400,250+i,450);
	line(250+i,450,300+i,450);
	line(300+i,450,300+i,400);
	line(250+i,400,250+i,300);
	line(450+i,400,450+i,300);
	delay(20);
	cleardevice();
	}
	getch();
	closegraph();
}