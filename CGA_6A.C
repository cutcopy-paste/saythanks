#include<graphics.h>
void main()
{
  int x1,y1,x2,y2,x,y;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  printf("Enter co-ordinates for A and B:");
  scanf("%d %d %d %d",&x1,&y1,&x2,&y2);
  printf("Enter values for Sx and Sy:");
  scanf("%d %d",&x,&y);
  rectangle(x1,y1,x2,y2);
  x1=x1*x;
  y1=y1*y;
  x2=x2*x;
  y2=y2*x;
  rectangle(x1,y1,x2,y2);
  getch();
  closegraph();
}