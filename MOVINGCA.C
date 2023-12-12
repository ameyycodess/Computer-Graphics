#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,btp,i;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
  for (i=0;i<500;i++)
{
 //car
 btp=(getmaxy()-100)-35;
 line(10+i,btp,10+i,btp-50);//|-->back
 line(10+i,btp-50,20+i,btp-60);
 line(10+i,btp,40+i,btp); //____
 arc(65+i,btp,0,180,25); //back tyre bonnet
 line(90+i,btp,180+i,btp); //________
 arc(205+i,btp,0,180,25);//front tyre bonnet
 circle(65+i,btp,20);//back tyre
 circle(205+i,btp,20);//front tyre
 line(230+i,btp,260+i,btp);
 line(260+i,btp,280+i,btp-10);
 line(280+i,btp-10,280+i,btp-50);//|-->front
 line(280+i,btp-50,250+i,btp-60);//  \-->front
 line(20+i,btp-60,250+i,btp-60);// -------- mid line
 line(220+i,btp-60,190+i,btp-100); //\-->front mirror 1
 line(190+i,btp-100,185+i,btp-100);
 line(185+i,btp-100,215+i,btp-60); //\-->front mirror 2
 line(180+i,btp-60,185+i,btp-75);//steering
 line(150+i,btp-60,140+i,btp-90);//seat 1
 line(140+i,btp-60,130+i,btp-90);//seat2
 line(130+i,btp-90,140+i,btp-90);//seat comp
 line(90+i,btp-60,90+i,btp-65);//engine 1
 line(50+i,btp-60,50+i,btp-70);//engine 2
 line(50+i,btp-70,90+i,btp-65);//engine comp
 circle(160+i,btp-90,10);//man face
 line(160+i,btp-80,160+i,btp-60);//body
 line(160+i,btp-75,170+i,btp-65);//arm
 line(170+i,btp-65,180+i,btp-65);//hand
 //door
 line(180+i,btp-50,180+i,btp-20);
 line(100+i,btp-50,100+i,btp-20);
 line(100+i,btp-20,180+i,btp-20);
 line(100+i,btp-50,180+i,btp-50);
 line(105+i,btp-45,110+i,btp-45);
 delay(10);
 cleardevice();
 //road
 line(0,getmaxy()-115,getmaxx(),getmaxy()-115);
}
 getch();
 closegraph;
}
