//breshenham line algorithm
/**
input 200 200
        300 200
 */
#include<bits/stdc++.h>
using namespace std;
#include<graphics.h>

int main()
{

    int gd, gm;
    gd = DETECT;

    int x1, y1, x2, y2, dx, dy;

    cout<<"Enter starting points: ";
    cin>>x1>>y1;

    cout<<"Enter ending points: ";
    cin>>x2>>y2;

    initgraph(&gd, &gm, "");

    dx = x2 - x1;
    dy = y2 - y1;

    int p = 2*dy-dx;

    int x = x1, y = y1;


    while(x<= x2)
    {
        if(p<0)
        {
            putpixel(x,y, GREEN);
            x++;
            p = p+2*dy;
        }
        else
        {
            putpixel(x,y, RED);
            y++;
            x++;
            p = p+2*dy-2*dx;
        }
    }


    getch();
    closegraph();

}


