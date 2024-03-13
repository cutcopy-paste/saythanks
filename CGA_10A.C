#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
void main()
{
  int x,y,i,c=15;
  int gd=DETECT,gm;
  initgraph(&gd,&gm,"..\\BGI");
  printf("Enter center co-ordinates of circle:");
  scanf("%d %d",&x,&y);
    for(i=0;i<=480;i=i+20)
    {
      setcolor(random(c));
      circle(x,y,i);
      delay(500);
    }
  getch();
  closegraph();
}