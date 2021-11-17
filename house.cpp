#include "graphics.h"
#include "picture.hpp"

void house()
{
   setfillstyle (SOLID_FILL, YELLOW);
   bar(200, 600, 400, 400);

   setfillstyle (SOLID_FILL, RED);
   int poly[6];

   poly[0] = 400;  
   poly[1] = 400;
   poly[2] = 300; 
   poly[3] = 250;
   poly[4] = 200;   
   poly[5] = 400;
   
   fillpoly(3, poly);
}