#include<graphics.h>
#include<conio.h>
void main()
{
 int gd=DETECT,gm,xcen,ycen;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 xcen=getmaxx()/2;
 ycen=getmaxy()/2;
 //main
 circle(xcen,ycen,150);
 //smile
 ellipse(xcen,ycen+50,180,360,80,50);
 //eyes
 circle(xcen-50,ycen-50,30);
 circle(xcen+50,ycen-50,30);

 circle(xcen-50,ycen-50,10);
 circle(xcen+50,ycen-50,10);


 getch();
 closegraph();
}
