#include <stdio.h>


//dollar exchange rate
int	der(void)
{
  int dollars;
  double kurs;

  scanf("%d %lf", &dollars, &kurs);
  printf("%lf\n", dollars*kurs);

  return 0;
};

//perimentr
int	per(void) 
{
    int length, width;

    scanf("%d%d", &length, &width);

    int sum = length + width;

    printf("%d", sum*2);
  return 0;
}

//sum every digit>

int	sedn(void) 
{
    int num;

    scanf("%d", &num);

    int sum = num/100 + num%100/10 + num%10;

    printf("%d", sum);
  
  return 0;
}

