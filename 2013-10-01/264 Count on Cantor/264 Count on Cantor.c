#include <stdio.h>

int main()
{
    int input,n,r;
    while(scanf("%d",&input)!=EOF)
    {
        n = input;
        for(r=1;r<input;r++)
        {
            if(n<=r) break;
            n -= r;
        }
        if(r%2==0) printf("TERM %d IS %d/%d\n", input, n ,r-n+1);
        if(r%2!=0) printf("TERM %d IS %d/%d\n", input, r-n+1, n);
        //printf("%d,%d",n,r);
	}
    return(0);
}
