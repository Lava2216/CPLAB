#include<stdio.h>
#include<math.h>
int main()
{
 float s=20,a,b,c,d;
 scanf("%f%f%f",&a,&b,&c);
 d=sqrt(s*(s-a)*(s-b)*(s-c));
 printf("%f",d);
 
 return 0;
 }
