
#include <stdio.h>

int main()
{
    int i, sum = 0;

    for(i = 2; i <= 70; i += 2)
    {
        sum = sum + i;
    }

    printf("%d", sum);

    return 0;
}

