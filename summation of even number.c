#include<stdio.h>
int main()
{
    int i=1,sum=0;
    while(i<=70)
    {
        sum=sum+i;
        i=i+2;
    }
    printf("sum = %d",sum);
    return 0;
}
