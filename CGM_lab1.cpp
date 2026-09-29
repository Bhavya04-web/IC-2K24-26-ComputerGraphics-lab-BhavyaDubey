#include <graphics.h>
#include <conio.h>

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, (char*)"");

    line(50, 80, 200, 80);

  
    circle(125, 200, 50);

  
    rectangle(300, 50, 450, 150);

 
    line(375, 200, 300, 320); 
    line(300, 320, 450, 320); 
    line(450, 320, 375, 200); 

    getch();
    closegraph();
    return 0;
}