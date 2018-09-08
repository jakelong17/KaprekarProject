/**Author: Jake Long
* Date: 2018/09/05
* The program will ask for the current and initial investment
* values along with time and then output the annualized annualized
* rate of return
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char**argv)  {
  double time, initialValue, currentValue, annualizedRateOfReturn;
  double years, weeks, days;

  printf("Please input the initial value of your investment");
  scanf("%lf", &initialValue);

  printf("Please input the current value of your investment");
  scanf("%lf", &currentValue);

  printf("Please input the number of years since your initial investment");
  scanf("%lf", &years);

  printf("Please input the number of weeks since the last completed investment year");
  scanf("%lf", &weeks);

  printf("Please input the number of days since the last completed investment week");
  scanf("%lf", &days);



time = years + (weeks/52.1429) + (days/365);

annualizedRateOfReturn = pow(currentValue/initialValue,1/time)-1;
annualizedRateOfReturn = annualizedRateOfReturn * 100;

printf("Initial Value: %lf\n", initialValue);
printf("Current Value: %lf\n", currentValue);
printf("Years: %lf\n", years);
printf("Annualized rate of return: %lf\n", annualizedRateOfReturn);

return 0;
}
