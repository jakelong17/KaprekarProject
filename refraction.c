/**Author: Jake Long
* Date: 2018/09/05
* This program will prompt the user to enter the angle of incidence and
* then find the angle of refraction using Snell's Law.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char**argv)  {

  double AOI, IOR, LAOR;

  printf("Please input the Angle of Incidence");
  scanf("%lf", &AOI);

  printf("Please enter the Index of Refraction");
  scanf("%lf", &IOR);

printf("Angle of Incidence %lf\n", AOI);
printf("Index of Refraction %lf\n", IOR);

AOI = AOI * M_PI / 180;
LAOR = asin((1/IOR)*sin(AOI));
LAOR = LAOR * 180 / M_PI;

printf("Angle of Refraction %.2f\n", LAOR);

return 0;
}
