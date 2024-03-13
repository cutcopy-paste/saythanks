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
 getch();
 closegraph();
}