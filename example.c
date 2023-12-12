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
int per(void)
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

// 1- x=y; 0-x!=y; 6.2 https://stepik.org/lesson/57210/step/8?unit=35061

int main() {
  // put your code here
    int x,y;
    scanf("%d%d", &x, &y);
    printf("%d", (x==y));
  return 0;
}

// 6.2.2

int main()
{
  double x, y;
  scanf("%lf%lf", &x, &y);

  if (x > 0 && y > 0)
    printf("1");
  if (x < 0 && y > 0)
    printf("2");
  if (x < 0 && y < 0)
    printf("3");
  if (x > 0 && y < 0)
    printf("4");

  return 0;
}


int main(void){
  
  int k = 0, last = 0;

  scanf("%d",&k);

  last = k%10;
  
  switch (last) {
    default:
      printf("0\n");
      break;
    case 1 :
    case 9 : 
      printf("1\n");
      break;
    case 2 :
    case 8 :
      printf("4\n");
      break;
    case 5 : 
      printf("5\n");
      break;
    case 4 :
    case 6 : 
      printf("6\n");
      break;
    case 3 :
    case 7 : 
      printf("9\n");
      break;
  }
  
  return 0;
}



//(1 — «плохо», 2 — «неудовлетворительно», 3 — «удовлетворительно», 4 — «хорошо», 5 — «отлично»).
//6.2 https://stepik.org/lesson/54840/step/4?unit=34364

//#include <stdio.h>
//#include <locale.h>

int main(void) {
  setlocale(LC_ALL, "");
  int s;  
  scanf("%d",&s);

  switch (s) {
    case 1 : printf("плохо\n"); break;
    case 2 : printf("неудовлетворительно\n"); break;
    case 3 : printf("удовлетворительно\n"); break;
    case 4 : printf("хорошо\n"); break;
    case 5 : printf("отлично\n"); break;
  }

  return 0;
}

//#include <stdio.h>
// calc + - / *

int main() {
    char x;
    int a, b;
    scanf("%c%d%d", &x, &a, &b);
        switch(x) {
            case '+' : printf("%0.2f", (double)a + b); break;
            case '-' : printf("%0.2f", (double)a - b); break;
            case '*' : printf("%0.2f", (double)a * b); break;
            case '/' : printf("%0.2f", (double)a / b); break;
            default : printf("ERROR!");
        }
}

//BMR count

#include <stdio.h> 
//int main(void){

 char sex;
  int age, height, weight;
  double bov_m, bov_f;
  scanf("%c", &sex);
  scanf("%d", &age);
  scanf("%d", &height);
  scanf("%d", &weight); 
  bov_m = 10*weight + 6.25*height - 5*age + 5;
  bov_f = 10*weight + 6.25*height - 5*age - 161;
  switch (sex) 
  {
    default  : printf("ERROR!"); break;
    case 'f' : printf("|  BMR  |\n"); printf("|%.2f|\n",bov_f); break;
    case 'm' : printf("|  BMR  |\n"); printf("|%.2f|\n",bov_m); break;
  }

  return 0;
}

//years
//#include <stdio.h>

int main() {
  int age=0;
  scanf("%d", &age);
  if (age%10==1 && age/10!=1) printf("Мне %d год", age);
  else if ((age%10==2 || age%10==3 || age%10==4) && age/10!=1) printf("Мне %d года", age);
  else printf("Мне %d лет", age);
  return 0;
}




//distance between two points
//#include <stdio.h>
//#include <math.h>

int main() {
  double x1=0, y1=0, x2=0, y2=0;
  scanf("%lf%lf", &x1, &y1);
  scanf("%lf%lf", &x2, &y2);
  double r1 = sqrt (x1*x1+y1*y1);
  double r2 = sqrt (x2*x2+y2*y2);
  printf(r1<r2 ? "1" : "2");
    return 0;
}

//#include <stdio.h>
//factorial

int main() {
    // put your code here
    int a, result = 1;
    scanf("%d", &a);
        for(int i = 1; i <= a; i++) {
            result *=i;
        }
    printf("%d", result);
        
    return 0;
}

//fibonacci
//#include <stdio.h>

int main() {
  int n=0;
  int x=1, y=0;
    //x=1; y=1;
    //x=2; y=1;
    //x=3; y=2;
    //x=5; y=3;
    //x=8; y=5;
  scanf("%d", &n);
  for (int i=0; i<n; i++) {
      x += y;
	  y = x-y;
  }
    printf("%d", y);
  return 0;
}

//#include <stdio.h>
// https://stepik.org/lesson/57650/step/8?unit=35411
// 3 4 4 5 5 5 6 6 6 6 etc for input (3,6)

int main() {
    // put your code here
    int a, b;
    scanf("%d%d", &a, &b);
    
    for (int i = a; i <= b; i++) {
        for (int j=0; j<=i-a; j++) {
            printf("%5d", i);
        }
    }
    return 0;
}

//find simple digits

//#include <stdio.h> 
//#include <math.h>

   int main() { 
   int n, res; 
       scanf("%d",&n); 
        for(int i=2; i <= sqrt(n); i++) {
            res=n%i;
            if (res == 0 && i != n) {
                printf ("0");
                return 0;
            }
         }
       printf ("1");
       return 0; 
}


//search max value from input

//#include <stdio.h>

int main(void) {

  int N = 0;

  scanf("%d", &N);

  int max = -9999;
  int number = 0;

  for (int i = 1; i <= N; i++){
    scanf("%d", &number);
    if (max < number)
      max = number;
  }

  printf("%d\n", max);

  return 0;
}



//#include <stdio.h>
//sum nums

int main() {
  // put your code here
    int num, sum = 0;
    do {
        scanf("%d", &num);
        sum += num;
    } while (num != 0);
    
    printf("%d", sum);
  return 0;
}

//#include <stdio.h>
//find min/max value

int main() {
    // put your code here
    int inp, min=9999, max=-9999;
    
    do {
        scanf("%d", &inp);
        if (inp > max && inp != 0) {
            max = inp;
        } 
        if (inp < min && inp != 0) {
            min = inp;
        }
    } while (inp != 0);
    
    printf("%d %d", max, min);
    
    return 0;
}


//По данном числу N  определить, является ли оно степенью числа 
//#include <stdio.h>
//#include <math.h>

int main() {
    // put your code here
    float num;
    
    scanf("%f", &num);
    
    float log = log2(num);
    int logInt = log;
    
    if (log == logInt) {
        printf("YES");
    } else {
        printf("NO");
    }
    
    return 0;
}

//and other solution without math library

//#include <stdio.h>

int main() {
  int n=0;
  scanf("%d", &n);
  for (int i=1; i<=n; i*=2)
  {
      if (i==n) {printf("YES"); return 0;}
  }
  printf("NO");
  return 0;
}

//#include <stdio.h>
//#include <math.h>

int main() {
    int n;
    scanf("%d", &n);
    
    for (int i=1; (pow(2,i)) <= n; i++) {
        printf("%d ", i);
    }
    
  return 0;
}

//#include <stdio.h>
//continue/brack training

int main() {
    int num;
    
    while (1==1) {
    scanf("%d", &num);
        if (num < 0) continue;
        if (num == 0) break;
    printf("%d ", num);
    }
    
  return 0;
}



//1 
//2 2 
//3 3 3 
//4 4 4 4 
//5 5 5 5 5

//#include <stdio.h>


int main() {
    int num = 0;
    scanf("%d", &num);
    
    for (int i=1; i <= num; i++) {
        for (int j=1; j<=i; j++) {
            printf("%d ", j);
        }
        printf("\n");
    }
    
    return 0;
}


// nums in arr as odd and even
//#include <stdio.h>

int main() {
  // put your code here
    int count, num;
    
    scanf("%d", &count);
    int arr[count]; 
    
    for(int i=0; i < count; i++) {
        scanf("%d", &arr[i]);
    }
    
    for (int i = 0; i < count; i++) {
        //scanf("%d", &num);
        if (arr[i]%2 == 0) {
            printf("%d ", arr[i]);
        }
    }
    
    for (int i = 0; i < count; i++) {
        //scanf("%d", &num);
        if (arr[i]%2 != 0) {
            printf("%d ", arr[i]);
        }
    }
   
    
  return 0;
}


//#include <stdio.h>
// 2x matrix array


int main() {
    int rows, columns;
    scanf("%d", &rows);
    scanf("%d", &columns);
    
    for(int i = 0; i < rows; i++) {
        for(int j = 0; j < columns; j++) {
            int value = 0;
            scanf("%d ", &value);
            printf("%d ", value);
        }
        printf("\n");
    }
  return 0;
}


//#include <stdio.h>

int main() {
    int n = 0, mult_primary = 1, mult_second = 1;

    scanf("%d", &n);
    
    int arr [n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                mult_primary *= arr[i][j];
            }
            if (j+i == n-1) {
                mult_second *= arr[i][j]; 
            }
        }
    }
    
    if (mult_primary >= mult_second) {
        printf("%d %d", mult_primary, mult_second);
    } else {
        printf("%d %d", mult_second, mult_primary);
    }
    
  return 0;
}


//#include <stdio.h>

int main() {
    int n, sum_primary = 0, sum_secondary = 0;
    scanf("%d", &n);
    
    int arr[n][n];
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            scanf("%d", &arr[i][j]);
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++){
            if (i+j > n-1) {
                sum_secondary += arr[i][j];
            }
            if (i < j) {
                sum_primary += arr[i][j];
            }
        }
    }

    if (sum_primary <= sum_secondary) {
        printf("%d %d", sum_primary, sum_secondary);
    } else {
        printf("%d %d", sum_secondary, sum_primary);
    }
    
    return 0;
}




//#include <stdio.h>

int main() {
  int row, col;
  scanf("%d%d", &row, &col);
    
  int arr[row][col], sum[col], count = col-1;
    
    for (int i = 0; i < col; i++) {
     sum[i]= 0;
    }
    
    for (int i = 0; i < row; i++) {
      for (int j = 0; j < col; j++) {
          scanf("%d ", &arr[i][j]);
      }
    }
    
    for (int i = 0; i < col; i++) {
      for (int j = 0; j < row; j++) {
          sum[count] += arr[j][i];
      }
      count -= 1;
  }
    
    for (int i = 0; i < col; i++) {
        printf("%d ", sum[i]);
    }
    
  return 0;
}



//#include <stdio.h>
//shift matrix to count position


int main() {
  int size, count;
  scanf("%d", &size);
  int arr[size][size];
    
    //fill arr
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    
    scanf("%d", &count);
    
    if (count>size) count %= size;
    
    int new_arr[size][size];
    
    //fill new_arr
        for (int i=0; i<size; i++) {
         for (int j=0; j<size; j++) {
             if (j+count >= size) {
                 new_arr[i][j+count-size] = arr[i][j]; 
             } else {
                 new_arr[i][j+count] = arr[i][j];
             }
         } 
        }
    
    
    //output arr
    for (int i=0; i<size; i++) {
        for (int j=0; j<size; j++) {
            printf("%d", new_arr[i][j]);
        }
        printf("\n");
    }
  
    
    
  return 0;
}


//#include <stdio.h> snake arr

int main() {
        int N, M;
        scanf("%d%d", &N, &M);
        int mat[N][M];
        int number = 1;
 
        for(int i = 0; i <= N/2; i++) {
            for( int x = i; x < M-i; x++ ) {
             if( number <= N*M) {
                mat[i][x] =  number++;
             }
            }
 
            for( int y = 1+i; y < N-1-i; y++) {
              if( number <= N*M) 
              {
                mat[y][M-1-i]= number++;
               }
            }
 
            for( int x = i; x < M-i; x++){
              if( number <= N*M) 
              {
                mat[N-1-i][M-1-x] = number++;
               }
            }
 
            for( int y = 1+i; y < N-1-i; y++){
               if( number <= N*M) {
                 mat[N- 1 -y][i] = number++;
               }
            }
 
        }
 
 
        for(int y = 0; y < N; y++) {
            for(int x = 0; x < M; x++) {
                printf("%3d", mat[y][x]);
 
            }
            printf("\n");
        }
 
     return 0;
    }

//char to uppercase
//#include <stdio.h>

int main() {
  char symbol = "a";
  scanf("%c", &symbol);
  printf("%c", symbol-32);
    
  return 0;
}


//https://stepik.org/lesson/64750/step/5?unit=41555
//#include <stdio.h>

int main() {
    // put your code here
    int count;
    scanf("%d", &count);
    
    int arr[26] = {0};
    
    for(int i = 0; i <= count; i++) {
        char symb = 'a';
        scanf("%c ", &symb);
        if (symb > 64 && symb < 91) symb += 32;
        arr[symb-'a']++;
    }
    
    for (int i = 0; i < 26; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}


//#include <stdio.h>
//num to cunt alfabet

int main() {
  // put your code here
  int num = 0;
  scanf("%d", &num);
  
  char symbol = 'a' + (num-1);
  char symbol_uppercase = 'A' + (num-1);
      
  printf("%c%c", symbol_uppercase, symbol);
  
  return 0;
}

//count the number of characters
//#include <stdio.h>

int main() {
    // put your code here
    int count = 0;
    while (1) {
        char symb = 'a';
        scanf("%c", &symb);
        if (symb == '\0') break;
        count++;
    }
    
    printf("%d", count);
    return 0;
}

//count words
int main() {
    // put your code here
    int words_count = 0;
    char symbol = 'a', last_symb = ' ';
    
    while (1) {
        scanf("%c", &symbol);
        if (symbol == ' ' && last_symb != ' ') {
            words_count++;
        }

        if (symbol == '\n') {
            if (last_symb != ' ') words_count++;
        break;
        }
        
        last_symb = symbol;

    }
    
    printf("%d", words_count);
    return 0;
}
