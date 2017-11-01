/**
 * 求素数，使用sqrt，优化求素数效率
 */

#include <stdio.h>
#include <math.h>

int get_prime(int);

int main(int argc, char *argv[])
{
        get_prime(100);
}

int get_prime(int max_prime)
{
        unsigned long long c, l, n=0;
        double t;
        for(c=2; c<max_prime; c++)
        {
                t = sqrt((double)c);
                for(l = 2; l <= t; l++)
                        if (c % l == 0)
                                break;
                if (l > t )
                {
                        n++;
                        printf("%d\n", c);
                }
        }
}
