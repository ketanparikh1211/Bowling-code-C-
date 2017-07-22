#include<iostream>
#include<graphics>
#include<conio.h>
#include<dos.h>
#include<math.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
int p11,p12;
static int p1=0,p2=0;
void straight();
void strike();
void mid();
void gutterleft();
void topright();
void topleft();
void gutter();
void gutterright();
/*class proj
{
public:
char player1[10];
static int n1,n2;
proj(){}
proj(char a[])
{
for(n1=0;n1<12;n1++)
player1[n1]=a[n1];
}
};*/
void val(int i)
{
if(i<272&&i>242)
{
if(p11==1)
p1+=10;
if(p11==2)
p2+=10;
straight();
strike();
getch();
}
if(i<201)
{
gutterleft();
gutter();
getch();
}
if(i>299)
{
gutterright();
gutter();
getch();
}
if(i<299&&i>272)
{
if(p11==1)
p1+=5;
if(p11==2)
p2+=5;
topright();
mid();
getch();
}
if(i<242&&i>201)
{
if(p11==1)
p1+=5;
if(p11==2)
p2+=5;
topleft();
mid();
getch();
}
}
void strike()
{
cleardevice();
setcolor(15);
//rectangle(50,365,80,395);
//rectangle(15,400,45,430);
//rectangle(85,400,115,430);
rectangle(400,20,625,150);
setcolor(2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(4);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setcolor(6);
settextstyle(3,0,1);
outtextxy(400,150,"----INSTRUCTIONS----");
outtextxy(400,170,"1.PRESS a/d for left/right");
outtextxy(400,190,"2.PRESS w for straight");
outtextxy(400,210,"3.PRESS s to select angle");
outtextxy(400,230,"4.(a)10 points for perfect strike");
outtextxy(400,255,"  (b)5 points for strike");
outtextxy(400,280,"  (c)0 points for gutter");
outtextxy(10,40,"PRESS s for next bowl!!!");
setfillstyle(1,4);
setcolor(4);
fillellipse(300-(0.7),380-(5),60-(0.7),60-(0.7));
setcolor(9);
settextstyle(4,0,5);
outtextxy(401,60,"perfect strike");
getch();
}
void mid()
{
cleardevice();
setcolor(15);
//rectangle(50,365,80,395);
//rectangle(15,400,45,430);
//rectangle(85,400,115,430);
rectangle(400,20,625,150);
setcolor(2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(4);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
setcolor(15);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setcolor(6);
settextstyle(3,0,1);
outtextxy(400,150,"----INSTRUCTIONS----");
outtextxy(400,170,"1.PRESS a/d for left/right");
outtextxy(400,190,"2.PRESS w for straight");
outtextxy(400,210,"3.PRESS s to select angle");
outtextxy(400,230,"4.(a)10 points for perfect strike");
outtextxy(400,255,"  (b)5 points for strike");
outtextxy(400,280,"  (c)0 points for gutter");
outtextxy(10,40,"PRESS s for next bowl!!!");
setfillstyle(1,4);
setcolor(4);
fillellipse(300-(0.7),380-(5),60-(0.7),60-(0.7));
setcolor(9);
settextstyle(4,0,5);
outtextxy(421,60,"strike");
getch();
}
void gutter()
{
cleardevice();
setcolor(15);
//rectangle(50,365,80,395);
//rectangle(15,400,45,430);
//rectangle(85,400,115,430);
rectangle(400,20,620,150);
setcolor(2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setcolor(6);
settextstyle(3,0,1);
outtextxy(400,150,"----INSTRUCTIONS----");
outtextxy(400,170,"1.PRESS a/d for left/right");
outtextxy(400,190,"2.PRESS w for straight");
outtextxy(400,210,"3.PRESS s to select angle");
outtextxy(400,230,"4.(a)10 points for perfect strike");
outtextxy(400,255,"  (b)5 points for strike");
outtextxy(400,280,"  (c)0 points for gutter");
outtextxy(10,40,"PRESS s for next bowl!!!");
setfillstyle(1,4);
setcolor(4);
fillellipse(300-(0.7),380-(5),60-(0.7),60-(0.7));
setcolor(9);
settextstyle(4,0,8);
outtextxy(410,30,"gutter");
getch();
}

void straight()
{
for( int i=0;i<65;i+=3)
{
settextstyle(4,0,4);
outtextxy(55,350,"w");
//rectangle(15,400,45,430);
outtextxy(20,390,"a");
//rectangle(85,400,115,430);
outtextxy(90,390,"d");
//rectangle(400,20,620,150);
setcolor(15);
rectangle(50,365,80,395);
rectangle(15,400,45,430);
rectangle(85,400,115,430);
setcolor(i+2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setfillstyle(1,4);
setcolor(4);
fillellipse(300,380-(5*i),60-(0.7*i),60-(0.7*i));
delay(100);
cleardevice();
}
}
void gutterright()
{
for( int i=0;i<70;i+=3)
{
settextstyle(4,0,4);
outtextxy(55,350,"w");
//rectangle(15,400,45,430);
outtextxy(20,390,"a");
//rectangle(85,400,115,430);
outtextxy(90,390,"d");
//rectangle(400,20,620,150);
setcolor(15);
rectangle(50,365,80,395);
rectangle(15,400,45,430);
rectangle(85,400,115,430);
rectangle(400,20,620,150);
setcolor(i+2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setfillstyle(1,4);
setcolor(4);
fillellipse(300+(0.7)*i,380-(5*i),60-(0.7*i),60-(0.7*i));
delay(100);
cleardevice();
}
}
void topright()
{
for( int i=0;i<70;i+=3)
{
settextstyle(4,0,4);
outtextxy(55,350,"w");
//rectangle(15,400,45,430);
outtextxy(20,390,"a");
//rectangle(85,400,115,430);
outtextxy(90,390,"d");
//rectangle(400,20,620,150);
setcolor(15);
rectangle(50,365,80,395);
rectangle(15,400,45,430);
rectangle(85,400,115,430);
rectangle(400,20,620,150);
setcolor(i+2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setfillstyle(1,4);
setcolor(4);
fillellipse(300+(0.5)*i,380-(5*i),60-(0.7*i),60-(0.7*i));
delay(100);
cleardevice();
}
}
void topleft(){
for( int i=0;i<70;i+=3)
{
settextstyle(4,0,4);
outtextxy(55,350,"w");
//rectangle(15,400,45,430);
outtextxy(20,390,"a");
//rectangle(85,400,115,430);
outtextxy(90,390,"d");
//rectangle(400,20,620,150);
setcolor(15);
rectangle(50,365,80,395);
rectangle(15,400,45,430);
rectangle(85,400,115,430);
rectangle(400,20,620,150);
setcolor(i+2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setfillstyle(1,4);
setcolor(4);
fillellipse(300-(0.5)*i,380-(5*i),60-(0.7*i),60-(0.7*i));
delay(100);
cleardevice();
}
}

void gutterleft()
{
for( int i=0;i<70;i+=3)
{
settextstyle(4,0,4);
outtextxy(55,350,"w");
//rectangle(15,400,45,430);
outtextxy(20,390,"a");
//rectangle(85,400,115,430);
outtextxy(90,390,"d");
//rectangle(400,20,620,150);

setcolor(15);
rectangle(50,365,80,395);
rectangle(15,400,45,430);
rectangle(85,400,115,430);
rectangle(400,20,620,150);
setcolor(i+2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setfillstyle(1,4);
setcolor(4);
fillellipse(300-(0.7)*i,380-(5*i),60-(0.7*i),60-(0.7*i));
delay(100);
cleardevice();
}
}
int main()
{
clrscr();
char c[6],play1[20],play2[20];
int i,j,x,u=0;
float p;
int gd=DETECT,gm;
initgraph(&gd,&gm,"c:\\tc\\bgi");
settextstyle(4,0,5);
outtextxy(35,20,"--- The Bowling Game ---");
setcolor(5);
settextstyle(3,0,2);
outtextxy(15,90,"press 's' to START");
setfillstyle(1,4);
setcolor(4);
fillellipse(350,250,100,100);
setfillstyle(1,0);
setcolor(0);
fillellipse(375,220,12,12);
fillellipse(360,180,11,11);
fillellipse(398,185,10,10);
setcolor(14);
setfillstyle(2,14);
fillellipse(250,220,85,85);
setfillstyle(1,0);
setcolor(0);
fillellipse(230,220,12,12);
fillellipse(250,180,11,11);
fillellipse(210,185,10,10);
setcolor(3);
setfillstyle(1,3);
fillellipse(275,300,85,85);
setfillstyle(1,0);
setcolor(0);
fillellipse(295,370,12,12);
fillellipse(270,340,11,11);
fillellipse(315,335,10,10);
c[4]=getch();
// 2nd page
if(c[4]=='s')
{
cleardevice();
cout<<"enter player 1 name--";
gets(play1);
cout<<"enter player 2 name--";
gets(play2);
setcolor(6);
settextstyle(3,0,6);
outtextxy(95,120,play1);
outtextxy(405,120,play2);
outtextxy(270,120,"VS");
setcolor(3);
settextstyle(2,0,9);
outtextxy(95,180,"PLAYER 1");
outtextxy(405,180,"PLAYER 2");
setcolor(5);
settextstyle(3,0,2);
outtextxy(150,250,"press 's' to ----- BEGIN ----- ");
setcolor(15);
c[3]=getch();
if(c[3]=='s')
{
cleardevice();
rectangle(50,365,80,395);
settextstyle(4,0,4);
outtextxy(55,350,"w");
rectangle(15,400,45,430);
outtextxy(20,390,"a");
rectangle(85,400,115,430);
outtextxy(90,390,"d");
rectangle(400,20,620,150);
settextstyle(3,0,1);
outtextxy(415,50,"press key s to play");
setcolor(8);
rectangle(440,95,590,130);
setcolor(2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setfillstyle(1,4);
setcolor(4);
fillellipse(300,410,60,60);
c[1]=getch();
if(c[1]=='s')
{
for(p11=1;p11<3;p11++)
{
for(p12=0;p12<1;p12++)
{
cleardevice();
setcolor(15);
rectangle(50,365,80,395);
settextstyle(4,0,4);
outtextxy(55,350,"w");
rectangle(15,400,45,430);
outtextxy(20,390,"a");
rectangle(85,400,115,430);
outtextxy(90,390,"d");
rectangle(400,20,620,150);
settextstyle(3,0,5);
setcolor(7);
if(p11==1)
outtextxy(10,180,play1);
if(p11==2)
outtextxy(10,180,play2);
setcolor(8);
settextstyle(3,0,1);
rectangle(440,95,590,130);
setcolor(2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setfillstyle(1,4);
setcolor(4);
fillellipse(300,410,60,60);
outtextxy(415,50,":::::go to instructions:::::");
outtextxy(472,97,"BOWL!!!!");
setcolor(6);
settextstyle(3,0,1);
outtextxy(400,150,"----INSTRUCTIONS----");
outtextxy(400,170,"1.PRESS a/d for left/right");
outtextxy(400,190,"2.PRESS w for straight");
outtextxy(400,210,"3.PRESS s to select angle");
outtextxy(400,230,"4.(a)10 points for perfect strike");
outtextxy(400,255,"  (b)5 points for strike");
outtextxy(400,280,"  (c)0 points for gutter");
c[0]=getch();
if(c[0]=='d')
{
gutterright();
gutter();
getch();
}
if(c[0]=='a')
{
gutterleft();
gutter();
getch();
}
if(c[0]=='w')
{
timeup:
int h=50,k=50,x1=80,y1=20,i,y;
settextstyle(4,0,1);
setcolor(5);
outtextxy(0,80,"press key 's' to select angle");
line(50,50,50,70);
line(50,50,45,55);
line(50,50,55,55);
setcolor(3);
rectangle(1,1,92,70);
 p=3.14/180;
 for(i=180;i<320;i+=10)
 {
 if(kbhit()!=0)
 {
 val(i);
 break;
 }
 x=(x1*cos(i*p))-(y1*sin(i*p))+h*cos(i*p)-k*sin(i*p);
 y=(x1*sin(i*p))+(y1*cos(i*p))+h*sin(i*p)+k*cos(i*p);
 setcolor(1);
 line(h,k,x,y);
 delay(500);
 }
 if(i==320)
 {
 for(i=310;i>170;i-=10)
 {
 if(kbhit()!=0)
 {
 val(i);
 break;
 }
 x=(x1*cos(i*p))-(y1*sin(i*p))+h*cos(i*p)-k*sin(i*p);
 y=(x1*sin(i*p))+(y1*cos(i*p))+h*sin(i*p)+k*cos(i*p);
 setcolor(2);
 line(h,k,x,y);
 delay(500);

 }
 }
 if(i==170)
 {
 for(i=180;i<320;i+=10)
 {
 if(kbhit()!=0)
 {
 val(i);
 break;
 }
 x=(x1*cos(i*p))-(y1*sin(i*p))+h*cos(i*p)-k*sin(i*p);
 y=(x1*sin(i*p))+(y1*cos(i*p))+h*sin(i*p)+k*cos(i*p);
 u=1;
 setcolor(4);
 line(h,k,x,y);
 delay(500);
 }
 }
 }
 }
 }
cleardevice();
setcolor(15);
rectangle(50,365,80,395);
settextstyle(4,0,4);
outtextxy(55,350,"w");
rectangle(15,400,45,430);
outtextxy(20,390,"a");
rectangle(85,400,115,430);
outtextxy(90,390,"d");
rectangle(400,20,620,150);
settextstyle(3,0,1);
setcolor(8);
rectangle(440,95,590,130);
setcolor(2);
line(180,500,230,0);
line(190,500,235,0);
line(420,500,375,0);
line(410,500,370,0);
setcolor(15);
setfillstyle(2,2);
fillellipse(287,15,5,14);
fillellipse(267,15,5,14);
fillellipse(313,15,5,14);
fillellipse(335,15,5,14);
fillellipse(300,21,5,16);
fillellipse(300,48,5,20);
fillellipse(313,38,5,18);
fillellipse(287,38,5,18);
fillellipse(325,23,5,16);
fillellipse(275,23,5,16);
setfillstyle(1,4);
setcolor(4);
fillellipse(300,410,60,60);
outtextxy(415,50,":::::press r to retry:::::");
outtextxy(10,30,"press d for result");
if(u==1)
outtextxy(472,97,"!!!!TIME UP!!!!");
else
outtextxy(472,97,"!!!TRY AGAIN!!!");
c[2]=getch();
if(c[2]=='r')
goto timeup;
if(c[2]=='d')
{
(char)c[0]=p1;
(char)c[1]=p2;
cleardevice();
setcolor(5);
settextstyle(3,0,8);
outtextxy(230,20,"RESULT");
cout<<"\n\nSCORE of player 1--"<<p1;
cout<<"\n\nSCORE of player 2--"<<p2;
/*setcolor(9);
settextstyle(3,0,6);
outtextxy(20,100,"player1--");
outtextxy(250,100,c[0]);
outtextxy(20,150,"player2--");
outtextxy(250,150,c[1]);
*/
  setcolor(4);
  settextstyle(2,0,10);
if(p1>p2)
{
outtextxy(220,220,"WINNER--");
outtextxy(420,220,play1);
}
if(p2>p1)
{
outtextxy(220,220,"WINNER--");
outtextxy(420,220,play2);
}
if(p1==p2)
outtextxy(250,220,"DRAW");
setcolor(13);
for(i=0;i<700;i+=30)
fillellipse(10+i,400,20,20);
setcolor(3);
settextstyle(3,0,2);
outtextxy(350,320,"PRESS c for CREDITS");
c[5]=getch();
if(c[5]=='c')
{
cleardevice();
outtextxy(350,320,"MADE BY -- KETAN PARIKH");
 float x=1,y=0.00000,j=.5,count=.1;
   float r=15;
   setcolor(14);
   line(0,215,650,215);
    sleep(1);
    for(int k=0;k<=7;k++)
     {

      for(float i=90;i<270;i+=10)
       {
	y=cos(((i*22/7)/180))/j;

	if(y>0)
	y=-y;
	x+=5;

	setcolor(14);
	setfillstyle(1,14);
	circle(x,y*100+200,r);
	floodfill(x,y*100+200,14);

       delay(100);

	setcolor(0);
	setfillstyle(1,0);
	circle(x,y*100+200,r);
	floodfill(x,y*100+200,0);

       }

      j+=count;
      count+=.1;

     }
   getch();
 }
}
}
 }
}

}
