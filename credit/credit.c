#include <cs50.h>
#include <stdio.h>

int main(void)
{
     string a=get_string("credit card num: ");
     int total=0;
     for(int i=0; i<9; i=i+2)
     {
          int b =a[i];
          total=total + 2* b[i];
     }
     printf("%i\n",total);



}