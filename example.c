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

//https://stepik.org/lesson/53872/step/7?unit=32085

int main() {
  int a = 0, b = 0;
    
  scanf("%d %d", &a, &b);
    
  double c = (double)a/b;
  double d = (int)(c*10)%10;

  printf("%d %d", (int)c%10, (int)d);

 return 0;
}

/*

Sample Input 1:

248
Sample Output 1:

842
Sample Input 2:

230
Sample Output 2:

32
*/


int main(void) {
int a;
	scanf("%d", &a);
	print("%d", a%10*100 + a%100/10*10 + a/100);
}

//https://stepik.org/lesson/53872/step/9?unit=32085

int main() {
  int num, even, odd;
    
    scanf("%d", &num);
    
    even = (num%100/10) * (num/1000);
    odd = (num%10) * (num%1000/100);

    printf("%.2f", (double)even/odd);
  return 0;
}

//https://stepik.org/lesson/53872/step/10?unit=32085
//Одно число, равное разности между количеством байт в 

int main() {
  int k=0;
  scanf("%i", &k);
  long long int res = pow(2, 30)*k - pow (10, 9)*k;
  printf("%u", res);
  return 0;
}

//opposite value 1 or 0
//1=> 0, 0=>1
// #include <stdlib.h>

int main() {
int a;

scanf("%d", &a);
printf("%d", abs(a-1));

return 0;
};
