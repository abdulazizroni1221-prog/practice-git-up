#include<stdio.h>
int main ()
{
    int i=5,sum=0;
    while (i<=70)
    {
        sum =sum + i;
        i=i+5;
    }
    printf("sum = %d",sum);

    return 0;

}
