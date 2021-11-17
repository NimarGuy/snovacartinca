#include "graphics.h"
#include "picture.hpp"

void man()
{
   setfillstyle (SOLID_FILL, YELLOW);
   fillellipse(100, 500, 20, 20);
   setfillstyle(SOLID_FILL, WHITE);
   fillellipse(108, 495, 5, 5);
   fillellipse(92, 495, 5, 5);
   setfillstyle(SOLID_FILL, BLACK);
   fillellipse(93, 495, 2,2);
   fillellipse(107, 495, 2, 2);
   setcolor(RED);
   setlinestyle(0, 0, 3);
   moveto(92, 508);
   lineto(100, 510);
   lineto(108, 508);
   setcolor(WHITE);
   setlinestyle(0,0,4);
   moveto(100, 520);
   lineto(100, 575);
   lineto(125, 600);
   moveto(100, 575);
   lineto(75, 600);
   moveto(100, 545);
   lineto(125, 555);
   moveto(100, 545);
   lineto(75, 555);
}
