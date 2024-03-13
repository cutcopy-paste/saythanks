#include<graphics.h>
void main()
{
  int x;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  for(x=0;x<=640;x+=20)
  {
    cleardevice();
    circle(x,240,40);
    delay(100);
  }
  getch();
  closegraph();
}