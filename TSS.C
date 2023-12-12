#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,i;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 while(!kbhit())
 {
  for(i=0;i<getmaxy();i++){
   cleardevice();
   settextstyle(1,0,6);
   setcolor(12);
   outtextxy(getmaxx()/2,i,"AMEY");
  }
 }
 getch();
 closegraph();
}