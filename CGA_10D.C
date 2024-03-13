#include<graphics.h>
#include<stdlib.h>
void main()
{
  int x=20,y=30;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  for(y=20;y<=480;y+=5)
  {
    cleardevice();
    x+=5;
    circle(x,y,40);
    delay(50);
  }
  for(y=480;y<=480;y-=5)
  {
    cleardevice();
    x+=5;
    if(x>=getmaxx())
      break;
    circle(x,y,40);
    delay(50);
  }
  getch();
  closegraph();
}