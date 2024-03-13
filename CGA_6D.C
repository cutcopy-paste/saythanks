#include<graphics.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<math.h>
void main()
{
int gd,gm;
int xa,ya,xb,yb,xc,yc,x,y,midx,midy;
int
xa1,ya1,xb1,yb1,xc1,yc1,xa2,ya2,xb2,yb2,xc2,yc2,xa3,ya3,xb3,yb3,xc3,yc3;
clrscr();
detectgraph(&gd,&gm);
initgraph(&gd,&gm,"..\\BGI");
printf("\nEnter the coordinates of vertex A");
scanf("%d %d",&xa,&ya);
printf("\nEnter the coordinates of vertex B");
scanf("%d %d",&xb,&yb);
printf("\nEnter the coordinates of vertex C");
scanf("%d %d",&xc,&yc);
x=getmaxx();
y=getmaxy();
midx=x/2;
midy=y/2;
line(0,midy,x,midy);
line(midx,0,midx,y);
line(xa+midx,midy-ya,xb+midx,midy-yb);
line(xb+midx,midy-yb,xc+midx,midy-yc);
line(xc+midx,midy-yc,xa+midx,midy-ya);
//reflection w.r.t X-axis point A
xa1=xa;
ya1=-ya;
xb1=xb;
yb1=-yb;
xc1=xc;
yc1=-yc;
//reflection w.r.t Y-axis point A
xa2=-xa;
ya2=ya;
xb2=-xb;
yb2=yb;
xc2=-xc;
yc2=yc;
//reflection w.r.t origin point A
xa3=-xa;
ya3=-ya;
xb3=-xb;
yb3=-yb;
xc3=-xc;
yc3=-yc;
/*printf("\nReflected co-ordinates w.r.t X- axis are: \n");
printf("for A: %d %d",xa1,ya1);
printf("for B: %d %d",xb1,yb1);
printf("for C: %d %d",xc1,yc1);
printf("\nReflected co-ordinates w.r.t Y- axis are: \n");
printf("for A: %d %d",xa2,ya2);
printf("for B: %d %d",xb2,yb2);
printf("for C: %d %d",xc2,yc2);
printf("\nReflected co-ordinates w.r.t origin are: \n");
printf("for A: %d %d",xa3,ya3);
printf("for B: %d %d",xb3,yb3);
printf("for C: %d %d",xc3,yc3);*/
line(xa1+midx,midy-ya1,xb1+midx,midy-yb1);
line(xb1+midx,midy-yb1,xc1+midx,midy-yc1);
line(xc1+midx,midy-yc1,xa1+midx,midy-ya1);
line(xa2+midx,midy-ya2,xb2+midx,midy-yb2);
line(xb2+midx,midy-yb2,xc2+midx,midy-yc2);
line(xc2+midx,midy-yc2,xa2+midx,midy-ya2);
line(xa3+midx,midy-ya3,xb3+midx,midy-yb3);
line(xb3+midx,midy-yb3,xc3+midx,midy-yc3);
line(xc3+midx,midy-yc3,xa3+midx,midy-ya3);
getch();
closegraph();
}
