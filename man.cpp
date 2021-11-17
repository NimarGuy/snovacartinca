#include "graphics.h"
#include "picture.hpp"

void man()
{
   setfillstyle (SOLID_FILL, YELLOW);
   fillellipse(100, 500, 20, 20);
   moveto(100, 520);
   setlinestyle(0,0,4);
   lineto(100, 575);
   lineto(125, 600);
   moveto(100, 575);
   lineto(75, 600);

}