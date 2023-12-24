#include<graphics.h>
#include<conio.h>
#include<dos.h>
void main()
{
 int gd=DETECT,gm,x,y,i,xx=0,yy=0,X=0,Y=0;
 initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
 x =getmaxx();
 y =getmaxy();
  for(i=0;i<150;i++){


 //goalpost
 line(x,y/2,x,y/2+80);
 line(x-100,y/2,x-100,y/2+80);
 line(x-100,y/2,x,y/2);
 line(x-100,y/2+80,x,y/2+80);

 line(x-100,y/2,x-160,y/2-40);
 line(x,y/2,x-60,y/2-40);

 line(x-160,y/2-40,x-60,y/2-40);
 line(x-160,y/2-40,x-160,y/2+40);
 //complete


 //p1
 line(20,200,20,260);//body
 if(i<=10){
 line(20,260,10,290);//left leg
 line(20,260,30,290);//right leg
 }
 else if(i>=11 && i<22){
  line(20,260,18,290);//left leg
  line(20,260,40,270);           //hit right leg
 }
 else{
  line(20,260,10,290);//left leg
 line(20,260,30,290);//right leg
 }
 line(20,220,10,250);//left hand
 line(20,220,30,250);//right hand
 circle(20,185,15);//face


 //p2
 line(290,310,290,370);//body
 if(i>=11 && i<70){
 line(290,370,280,400);//left leg
 line(290,370,300,400);//right leg
 }
 else if (i>70 && i<=80){
 line(290,370,288,400);//left leg
 line(290,370,310,380);//right leg
}
 else{
    line(290,370,280,400);//left leg
 line(290,370,300,400);//right leg
 }

 line(290,330,280,360);//left hand
 line(290,330,300,360);//right hand

circle(290,295,15);//face
if(i<10){
   circle(50,270,18);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(50,270,WHITE);
}

 //football
 if(i>10 && i<=70){
 circle(50+xx,270+yy,18);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(50+xx,270+yy,WHITE);
 yy+=2;
 xx+=4;
 }
 else if(i>10 && i<=125){

  circle(302+X,395-Y,18);
 setfillstyle(SOLID_FILL,WHITE);
 floodfill(302+X,395-Y,WHITE);
  Y+=2;
  X+=4;

 }

 delay(35);
 cleardevice();
 }
 getch();

closegraph();
}