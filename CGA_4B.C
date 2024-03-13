#include<graphics.h>
#include<conio.h>
void main()
{
  int x1,y1,x2,y2,dx,dy,x,y,p;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  printf("Enter co-ordinates for A:");
  scanf("%d %d",&x1,&y1);
  printf("Enter co-ordinates for B:");
  scanf("%d %d",&x2,&y2);
  dx=x2-x1;
  dy=y2-y1;
  x=x1;
  y=y1;
  p=2*dy-dx;
  while(x<x2)
  {
    if(p>=0)
    {
       putpixel(x,y,7);
       y++;
       p=p+2*dy-2*dx;
    }
    else
    {
       putpixel(x,y,7);
       p=p+2*dy;
    }
    x++;
  }
  getch();
  closegraph();
}