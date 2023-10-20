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

//degree to radians

int dtr(void) {
    // put your code here
    int deg;
    scanf("%d", &deg);
    double rad = deg * 3.1415926 / 180;
    printf("%.2f", rad);
    return 0;
};

#include <stdio.h>
#include <stdlib.h>

int main (void)
{
  int o,t;
  scanf("%i%i", &o, &t);
  int rnd = o + rand()%(t-o-1);
  printf("%i", rnd);
};

//5.1 — 5

int main (void) {
  int a=0;
  scanf("%d", &a);
  int cap = 249.5/0.05 * a;
  double mol = 249.5 * a / 3e-23;
  printf("%d %.3e", cap, mol);
  return 0;
}
