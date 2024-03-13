#include<graphics.h>
#include<math.h>
void main()
{
  int xcen,ycen,x1,y1,x2,y2,x3,y3,rx,ry,theta;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  xcen=getmaxx()/2;
  ycen=getmaxy()/2;
  line(xcen,0,xcen,getmaxy());
  line(0,ycen,getmaxx(),ycen);
  printf("Enter values for A,B & C:");
  scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
  line(x1+xcen,ycen-y1,xcen+x2,ycen-y2);
  line(x2+xcen,ycen-y2,xcen+x3,ycen-y3);
  line(x3+xcen,ycen-y3,xcen+x1,ycen-y1);
  printf("Enter values for rx,ry & theta");
  scanf("%d %d %d",&rx,&ry,&theta);
  x1=cos(theta)*(x1-rx)-sin(theta)*(x1-ry);
  y1=sin(theta)*(y1-rx)+cos(theta)*(y1-ry);
  x2=cos(theta)*(x2-rx)-sin(theta)*(x2-ry);
  y2=sin(theta)*(y2-rx)-sin(theta)*(y2-ry);
  x3=cos(theta)*(x3-rx)-sin(theta)*(x3-ry);
  y3=sin(theta)*(x3-rx)+cos(theta)*(x3-ry);
  line(x1+xcen,ycen-y1,x2+xcen,ycen-y2);
  line(x2+xcen,ycen-y2,x3+xcen,ycen-y3);
  line(x3+xcen,ycen-y3,x1+xcen,ycen-y1);
  getch();
  closegraph();
}