//worood fathi assi, ID: 1210412 , section 3, lab 5

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int sumOFDigits(int );
int reverse(int);
float calculate_m (int);

int main()
{
    int n;
   FILE *input;
   input=fopen("num.txt","r");
   fscanf(input,"%d",&n);
   printf("result= %.2f\n", calculate_m(n));
   printf("sum of digits=%d\n",sumOFDigits(n));
   printf("Reverse=%d", reverse(n));
   fclose(input);

    return 0;
}

int sumOFDigits(int n)
{
    int a,b,c,d;
   a=n%10;
   b=n%100/10;
   c=n%1000/100;
   d=n/1000;
   int sumofdigit=a+b+c+d;
   return sumofdigit;

}

int reverse(int n)
{
    int w,e=0;
  while(n!=0)
  {
      w=n%10;
      e=e*10+w;
      n=n/10;
  }

   return e;
}

float calculate_m (int n)
{
    float m=sqrt(sumOFDigits(n)+reverse(n));
    return m;
}
