#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,xcen,ycen;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 textattr(BLACK<<8+WHITE);
 xcen=getmaxx()/2;
 ycen=getmaxy()/2;
 //happy
 circle(xcen,ycen,100);

 ellipse(xcen-35,ycen-35,0,360,8,13);

 ellipse(xcen+35,ycen-35,0,360,8,13);

 ellipse(xcen,ycen+20,180,360,60,50);
 //smile compl
 delay(1500);
 clrscr();

 //sad
 //main

 circle(xcen,ycen,100);

 ellipse(xcen-35,ycen-35,0,360,8,13);

 ellipse(xcen+35,ycen-35,0,360,8,13);

 ellipse(xcen,ycen+40,0,180,50,20);
 delay(1500);
 clrscr();
 //compl
 //confused
 circle(xcen,ycen,100);

 ellipse(xcen-35,ycen-35,0,360,8,13);

 ellipse(xcen+35,ycen-35,0,360,8,13);

 line(xcen-50,ycen+40,xcen+50,ycen+40);
 delay(1500);
 clrscr();
 //compl
 //angry
 circle(xcen,ycen,100);

 //ellipse(xcen-35,ycen-35,0,360,8,13);
 line(xcen-45,ycen-45,xcen-20,ycen-30);
 //ellipse(xcen+35,ycen-35,0,360,8,13);
 line(xcen+45,ycen-45,xcen+20,ycen-30);

 line(xcen-50,ycen+40,xcen+50,ycen+40);
 delay(1500);
 clrscr();
 //compl


 //evil
 circle(xcen,ycen,100);
 line(xcen-45,ycen-45,xcen-20,ycen-30);
 line(xcen+45,ycen-45,xcen+20,ycen-30);
 ellipse(xcen,ycen+20,180,360,60,50);
 delay(1500);
 clrscr();
 //compl

 //laugh
 circle(xcen,ycen,100);
 line(xcen-45,ycen-45,xcen-20,ycen-30);
 line(xcen-20,ycen-30,xcen-45,ycen-10);
 line(xcen+45,ycen-45,xcen+20,ycen-30);
 line(xcen+20,ycen-30,xcen+40,ycen-10);
 ellipse(xcen,ycen+20,180,360,60,50);
 ellipse(xcen,ycen+20,180,360,60,20);
 delay(1500);
 clrscr();
 //compl


 //wowed
 circle(xcen,ycen,100);
 ellipse(xcen-35,ycen-35,0,360,8,13);

 ellipse(xcen+35,ycen-35,0,360,8,13);

 ellipse(xcen,ycen+40,0,360,25,30);
 delay(1500);
 clrscr();
 //compl

 getch();
 closegraph();
}
