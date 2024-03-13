#include<graphics.h>
#include<stdlib.h>
void main()
{
  int col=480,row=640,color=10,font=10,dir=2,size=10;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  while(!kbhit())
  {
    settextstyle(random(font),random(dir),random(size));
    setcolor(random(color));
    outtextxy(random(col),random(row),"hELOO WORLD");
    delay(250);
  }
  getch();
  closegraph();
}
