
#include <graphics.h>
#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    float x1, y1, x2, y2;

    cout << "Enter starting point (x1 y1): ";
    cin >> x1 >> y1;

    cout << "Enter ending point (x2 y2): ";
    cin >> x2 >> y2;

    float dx = x2 - x1;
    float dy = y2 - y1;

    int steps = max(abs(dx), abs(dy));

    if (steps == 0)
    {
        putpixel(round(x1), round(y1), WHITE);
    }
    else
    {
        float xinc = dx / steps;
        float yinc = dy / steps;

        float x = x1, y = y1;

        for (int i = 0; i <= steps; i++)
        {
            putpixel(320 + round(x), 240 - round(y), WHITE);
            x += xinc;
            y += yinc;
        }
    }

    getch();
    closegraph();

    return 0;
}
