#include<graphics.h>
#include<conio.h>
void main()
{
 int xcen,ycen;
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"..\\BGI");
 xcen=getmaxx()/2;
 ycen=getmaxy()/2;
 line(xcen,0,xcen,getmaxy());
 line(0,ycen,getmaxx(),ycen);
 circle(xcen/2,ycen/2,50);
 ellipse(xcen/2,ycen+ycen/2,0,360,100,50);
 arc(xcen+xcen/2,ycen+ycen/2,0,180,50);
 rectangle(xcen+50,ycen-200,xcen+200,ycen-50);
 getch();
 closegraph();
}