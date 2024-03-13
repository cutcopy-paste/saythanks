#include<graphics.h>
#include<conio.h>
void main()
{
  int x,y,x1,y1,x2,y2,dx,dy,step,xinc,yinc,i;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  printf("Enter co-ordinates of A:");
  scanf("%d %d",&x1,&y1);
  printf("Enter co-ordinates of B:");
  scanf("%d %d",&x2,&y2);
  dx=x2-x1;
  dy=y2-y1;
  if(abs(dx)>abs(dy))
  {
    step=abs(dx);
  }
  else
  {
    step=abs(dy);
  }
  xinc=dx/step;
  yinc=dy/step;
  x=x1;
  y=y1;
  for(i=0;i<step;i++)
  {
    x+=xinc;
    y+=yinc;
    putpixel(x,y);
  }
  getch();
  closegraph();
}