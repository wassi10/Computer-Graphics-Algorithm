//dda line algorithm
/**
    1. inittialize x1,y1, x2,y2
    2. calculate dx, dy, m
    3. if |m| <1
            for each integer x
                x++;
                y=y+m
                iterate until x<=x2
            else{
            for each integer y
            y++
            x= x+1/m
            iterate until y<=y2
            }
 */
#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

int main()
{

    int gd, gm;
    gd = DETECT;

    int x1, y1, x2, y2, dx, dy, m;

    cout<<"Enter starting points: ";
    cin>>x1>>y1;

    cout<<"Enter ending points: ";
    cin>>x2>>y2;

    initgraph(&gd, &gm, "");

    dx = x2 - x1;
    dy = y2 - y1;

    m = dy/dx;

    int x=x1, y = y1;

    if(abs(m)<1)
    {
        while(x<=x2)
        {
            putpixel(x,y, GREEN);
            x++;
            y=y+m;
        }
    }
    else
    {
        while(y<=y2)
        {
            putpixel(x,y, RED);
            y++;
            x=x+(1/m);
        }
    }

    getch();
    closegraph();

}
