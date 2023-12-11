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
 setfillstyle(1,YELLOW);
 floodfill(xcen,ycen,15);

 //eyes
 ellipse(xcen-50,ycen-50,0,360,18,23);
 setfillstyle(1,BLACK);
 floodfill(xcen-50,ycen-50,15);

 ellipse(xcen+50,ycen-50,0,360,18,23);
 setfillstyle(1,BLACK);
 floodfill(xcen+50,ycen-50,15);




 //smile
 setcolor(BLACK);
 ellipse(xcen,ycen+50,180,360,80,50);
 ellipse(xcen,ycen+50,180,360,80,25);

 getch();
 closegraph();
}
