#include <stdio.h>

int main()
{
  int year;
  year=1230;
  if(year%4 == 0)
    {
    if( year%100 == 0)
        {
            // year is divisible by 400, hence the year is a leap year
    if ( year%400 == 0)
        printf("%l is a leap year.", year);
    else
        printf("%d is not a leap year.", year);
        }
    else
        printf("%d is a leap year.", year );
    }
    else
        printf("%d is not a leap year.", year);

    return 0;
}
