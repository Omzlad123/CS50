#include <cs50.h>
#include <stdio.h>

int main(void)
{
  long type=0;
  long Num = get_long("Number??");
  int i= 0;
  int y;
  int sum=0;
  while (Num >0)
  {
       if (Num == 34 ||Num ==  37)
    {
      type = 1;
    }
    else if (Num == 4)
    {
      type = 2;
    }
    else if (Num == 51 || Num == 52 ||Num ==  53 ||Num ==  54 || Num == 55)

    {
      type = 3;
    }
    int x = Num%10;
    Num = Num/10;
           if (Num == 34 ||Num ==  37)
    {
      type = 1;
    }
    else if (Num == 4)
    {
      type = 2;
    }
    else if (Num == 51 || Num == 52 ||Num ==  53 ||Num ==  54 || Num == 55)

    {
      type = 3;
    }
    i = i +1;
    if (Num>0)
    {
      y = ((Num%10)*2);
      if (y >=10)
      {
        y = (y%10) + ((y/10)%10);
      }
      i = i+1;
      Num=Num/10;
      sum = x + y + sum;
    }
    else
    {
      sum = sum + x;
    }
  }

if (type == 1 && (sum%10 == 0) && i==15)
{
  printf("AMEX\n\n");
}
else if (type == 2 && (sum%10 == 0) && (i== 13 ||i== 16))
{
  printf("Visa\n\n ");
}
else if (type == 3 && (sum%10 == 0) && (i==16))
{
  printf("MASTERCARD\n\n");
}
else
{
  printf("INVALID\n\n");
}
printf("%ld",type);
}
