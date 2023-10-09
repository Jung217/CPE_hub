#include<stdio.h>
int main()
{
    int times, n, input, rev, result, remain, chk;
    scanf("%d",&n);
    while(n>0)
    {
        chk = 1;
        times  = 0;
        scanf("%d",&result);
        while(1)
        {
            rev = 0;
            input = result;
            while (input != 0)
            {
                remain = input % 10;
                rev = rev * 10 + remain;
                input /= 10;
            }
            //printf("%d %d\n", result, rev);
            if(result != rev || chk == 1)
            {
                result = result + rev;
                chk--;
                times++;
            }
            else break;
        }
        printf("%d %d\n", times, result);
        n--;
    }
    return(0);
}
