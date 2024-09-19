#include<stdio.h>
int main()
{
 float m;
 scanf("%f",&m);
        if(m>=90)
    printf("s");
    else if(m>=80 && m<90)
    printf("A");
    else if(m>=70 && m<80)
    printf("B");
    else if(m>=60 && m<70)
    printf("C");
    else if(m>=50 && m<60)
    printf("D");
    else if(m>=40 && m<50)
    printf("E");
    else if(m>=0 && m<40)
    printf("F");
    
    return 0;    
    }
