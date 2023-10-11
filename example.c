#include <stdio.h>


//dollar exchange rate
int	main(void)
{
  int dollars;
  double kurs;

  scanf("%d %lf", &dollars, &kurs);
  printf("%lf\n", dollars*kurs);

  return 0;
};

//perimentr
int	main(void) 
{
    int length, width;

    scanf("%d%d", &length, &width);

    int sum = length + width;

    printf("%d", sum*2);
  return 0;
}

//sum every digit

#include <stdio.h>

int	main() 
{
    int num;

    scanf("%d", &num);

    int sum = num/100 + num%100/10 + num%10;

    printf("%d", sum);
  
  return 0;
}

