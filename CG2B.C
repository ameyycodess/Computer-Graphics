#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int gd= DETECT,gm,xcen,ycen;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 xcen=getmaxx()/2;
 ycen=getmaxy()/2;
 //bottom lines
 line(xcen,ycen+50,xcen+100,ycen+20);
 line(xcen,ycen+50,xcen-100,ycen+20);

 //straight lines
 line(xcen,ycen+50,xcen,ycen-50);
 line(xcen+100,ycen+20,xcen+100,ycen-80);
 line(xcen-100,ycen+20,xcen-100,ycen-80);

 //slanting lines
 line(xcen-100,ycen-80,xcen,ycen-50);
 line(xcen,ycen-50,xcen+100,ycen-80);

 //upper part
 line(xcen,ycen-50,xcen-50,ycen-125);
 line(xcen-50,ycen-125,xcen-100,ycen-80);
 line(xcen+100,ycen-80,(xcen+100)-50,(ycen-80)-70);
 line((xcen+100)-50,(ycen-80)-70,xcen-50,ycen-125);

 //door
 line((xcen-50)-25,ycen+28,(xcen-50)-25,ycen-25);
 line((xcen-50)+20,ycen+40,(xcen-50)+20,ycen-10);
 line((xcen-50)-25,ycen-25,(xcen-50)+20,ycen-10);


 getch();
 closegraph();
}