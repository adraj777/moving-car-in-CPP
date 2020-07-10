#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
 clrscr ();
 int gdriver=DETECT,gmode,errorcode;
 initgraph(&gdriver,&gmode,"h:\tc\bin");
 errorcode=graphresult();

 if(errorcode!=grOk)
  { cout<<grapherrormsg(errorcode)<<endl;
    getch();
  }

   int a=1,deg=0;
   //int ha=300,hb=300,hc=200,hd=630,he=100;
   int tx=50,ty=250, tx1=250,ty1=250, tx2=750,ty2=250, tx3=870;
   int txc=500, tyc=200, tx4=1000,tx5=1150,tx6=1300,tx7=1600;
   int i=0;
//for(int i=1;i<1000;i++)      //198
do
{   // i++;
     cleardevice();

	//background
	{       //tree1
	setcolor(6);
	line(tx-i,ty+10,tx-i,ty+55);
	line(tx+30-i,ty+10,tx+30-i,ty+55);
	arc(tx-10-i,ty+55,270,0,10);
	arc(tx+40-i,ty+55,180,270,10);
	setcolor(10);
	arc(tx-10-i,ty-10,150,270,30);
	arc(tx+40-i,ty-10,270,30,30);
	arc(tx-10-i,ty-40,100,200,25);
	arc(tx+40-i,ty-40,340,80,25);
	arc(tx+15-i,ty-50,50,130,30);

	//tree2
	setcolor(6);
	line(tx1-i,ty1+10,tx1-i,ty1+55);
	line(tx1+30-i,ty1+10,tx1+30-i,ty1+55);
	arc(tx1-10-i,ty1+55,270,0,10);
	arc(tx1+40-i,ty1+55,180,270,10);
	setcolor(10);
	arc(tx1-10-i,ty1-10,150,270,30);
	arc(tx1+40-i,ty1-10,270,30,30);
	arc(tx1-10-i,ty1-40,100,200,25);
	arc(tx1+40-i,ty1-40,340,80,25);
	arc(tx1+15-i,ty1-50,50,130,30);

	//tree3
	setcolor(6);
	line(tx2-i,ty2+10,tx2-i,ty2+55);
	line(tx2+30-i,ty2+10,tx2+30-i,ty2+55);
	arc(tx2-10-i,ty2+55,270,0,10);
	arc(tx2+40-i,ty2+55,180,270,10);
	setcolor(10);
	arc(tx2-10-i,ty2-10,150,270,30);
	arc(tx2+40-i,ty2-10,270,30,30);
	arc(tx2-10-i,ty2-40,100,200,25);
	arc(tx2+40-i,ty2-40,340,80,25);
	arc(tx2+15-i,ty2-50,50,130,30);

	//tree4
	setcolor(6);
	line(tx3-i,ty+10,tx3-i,ty+55);
	line(tx3+30-i,ty+10,tx3+30-i,ty+55);
	arc(tx3-10-i,ty+55,270,0,10);
	arc(tx3+40-i,ty+55,180,270,10);
	setcolor(10);
	arc(tx3-10-i,ty-10,150,270,30);
	arc(tx3+40-i,ty-10,270,30,30);
	arc(tx3-10-i,ty-40,100,200,25);
	arc(tx3+40-i,ty-40,340,80,25);
	arc(tx3+15-i,ty-50,50,130,30);

	//cloud
	setcolor(8);
	arc(txc-10-i,tyc-40,130,230,25);
	arc(txc+40-i,tyc-40,310,50,25);
	arc(txc+15-i,tyc-50,30,150,30);
	arc(txc+15-i,tyc-30,210,330,30);

		setcolor(6);
	line(tx4-i,ty+10,tx4-i,ty+55);
	line(tx4+30-i,ty+10,tx4+30-i,ty+55);
	arc(tx4-10-i,ty+55,270,0,10);
	arc(tx4+40-i,ty+55,180,270,10);
	setcolor(10);
	arc(tx4-10-i,ty-10,150,270,30);
	arc(tx4+40-i,ty-10,270,30,30);
	arc(tx4-10-i,ty-40,100,200,25);
	arc(tx4+40-i,ty-40,340,80,25);
	arc(tx4+15-i,ty-50,50,130,30);

	setcolor(6);
	line(tx5-i,ty+10,tx5-i,ty+55);
	line(tx5+30-i,ty+10,tx5+30-i,ty+55);
	arc(tx5-10-i,ty+55,270,0,10);
	arc(tx5+40-i,ty+55,180,270,10);
	setcolor(10);
	arc(tx5-10-i,ty-10,150,270,30);
	arc(tx5+40-i,ty-10,270,30,30);
	arc(tx5-10-i,ty-40,100,200,25);
	arc(tx5+40-i,ty-40,340,80,25);
	arc(tx5+15-i,ty-50,50,130,30);

	setcolor(6);
	line(tx6-i,ty+10,tx6-i,ty+55);
	line(tx6+30-i,ty+10,tx6+30-i,ty+55);
	arc(tx6-10-i,ty+55,270,0,10);
	arc(tx6+40-i,ty+55,180,270,10);
	setcolor(10);
	arc(tx6-10-i,ty-10,150,270,30);
	arc(tx6+40-i,ty-10,270,30,30);
	arc(tx6-10-i,ty-40,100,200,25);
	arc(tx6+40-i,ty-40,340,80,25);
	arc(tx6+15-i,ty-50,50,130,30);

	setcolor(6);
	line(tx7-i,ty+10,tx7-i,ty+55);
	line(tx7+30-i,ty+10,tx7+30-i,ty+55);
	arc(tx7-10-i,ty+55,270,0,10);
	arc(tx7+40-i,ty+55,180,270,10);
	setcolor(10);
	arc(tx7-10-i,ty-10,150,270,30);
	arc(tx7+40-i,ty-10,270,30,30);
	arc(tx7-10-i,ty-40,100,200,25);
	arc(tx7+40-i,ty-40,340,80,25);
	arc(tx7+15-i,ty-50,50,130,30);

	}

	//car
	setcolor(12);
	{
	line(320,320,370,320);
	line(370,320,400,340);
	line(400,340,430,340);
	line(430,340,435,360);
	line(432,343,434,350);
	setcolor(14);
	line(433,343,435,350);

	setcolor(12);
	line(435,360,420,360);
	arc(410,360,0,180,10);
	setcolor(7);
	arc(410,360,0-deg,30-deg,5);
	arc(410,360,120-deg,150-deg,5);
	arc(410,360,240-deg,270-deg,5);
	setcolor(8);
	circle(410,360,7);

	setcolor(12);
	line(400,360,340,360);
	arc(330,360,0,180,10);
	setcolor(7);
	arc(330,360,0-deg,30-deg,5);
	arc(330,360,120-deg,150-deg,5);
	arc(330,360,240-deg,270-deg,5);
	setcolor(8);
	circle(330,360,7);

	setcolor(12);
	line(320,360,300,360);
	line(300,340,300,360);
	line(300,340,320,320);

	}
       setcolor(3);
       line(0,330,308,330);  //road
       line(388,330,639,330);
       line(0,380,639,380);

     deg=deg+3;
     delay(5);
     i++;
}while(i<1500);


getch();
}