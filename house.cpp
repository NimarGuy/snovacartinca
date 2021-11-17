#include "graphics.h"
#include "picture.hpp"

void house()
{
   setfillstyle (SOLID_FILL, YELLOW);
   bar(260, 450, 420, 600);

   setfillstyle (SOLID_FILL, RED);
   int poly[6];

   poly[0] = 450;
   poly[1] = 450;
   poly[2] = 340; 
   poly[3] = 270;
   poly[4] = 220;   
   poly[5] = 450;
   
   fillpoly(3, poly);
}
