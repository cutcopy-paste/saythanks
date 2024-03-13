#include<graphics.h>
#include<dos.h>
void boundry(int x,int y,int f,int b)
{
  if(getpixel(x,y)!=f&&getpixel(x,y)!=b)
  {
    putpixel(x,y,f);
    delay(10);
    boundry(x+1,y,f,b);
    boundry(x,y+1,f,b);
    boundry(x-1,y,f,b);
    boundry(x,y-1,f,b);
    boundry(x-1,y-1,f,b);
    boundry(x-1,y+1,f,b);
    boundry(x+1,y-1,f,b);
    boundry(x+1,y+1,f,b);
  }
}
void main()
{
 int gd=DETECT,gm;
 initgraph(&gd,&gm,"..\\BGI");
 rectangle(50,50,100,100);
 boundry(51,51,4,15);
 getch();
 closegraph();
}