#include <stdio.h>

int main(int argc, char *argv[])
{
    int x;
    // printf("请输入一个数:");
    // scanf("%d", &x);

    for( x = 2; x < 100; x++)
    {
        int i;
        int isPrime = 1;
        for(i = 2; i < x; i++)
        {
            if(x % i == 0)
                {
                    isPrime = 0;
                    break;
                }
        }
        if(isPrime == 1)
        {
            printf("%d ", x);
        }
        // else
        // {
        //     printf("%d不是素数\n", x);
        // }
    }
    printf("\n");

    return 0;
}
