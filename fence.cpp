#include "graphics.h"
#include "picture.hpp"

void fence()
{
   setfillstyle(SOLID_FILL, GREEN);
   int poly[10];
   bar(500, 430, 800, 440);
   bar(500, 480, 800, 490);
   bar(500, 530, 800, 540);
   for(int i = 0; i < 800; i += 30)
   {
   poly[0] = 480 + i;
   poly[1] = 600;
   poly[2] = 480 + i;
   poly[3] = 400;
   poly[4] = 490 + i;
   poly[5] = 350;
   poly[6] = 500 + i;
   poly[7] = 400;
   poly[8] = 500 + i;
   poly[9] = 600;
   fillpoly(5, poly);
   }
   
}
