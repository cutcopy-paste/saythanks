#include<graphics.h>
void main()
{
  int x,y,tx,ty,r;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  printf("Enter center co-ordinates of circle:");
  scanf("%d %d",&x,&y);
  printf("Enter radius of circle:");
  scanf("%d",&r);
  circle(x,y,r);
  printf("Enter values for tx & ty:");
  scanf("%d %d",&tx,&ty);
  x=x+tx;
  y=y+ty;
  circle(x,y,r);
  getch();
  closegraph();
}