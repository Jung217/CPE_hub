#include <stdio.h>

int main()
{
	int inpu0, inpu1, a, i = 1, j,chk=0;
	while(scanf("%d",&inpu0)!=EOF) {
	    int arr[200] = {0};
	    i = 1;
	    chk=0;
	    scanf("%d", &inpu1);
	    for(j=0;j<200;j++) arr[j] = 0;
	    arr[0] = a = inpu0;
	    if((inpu0==0) || (inpu1==0)){
	            printf("Boring!\n");
	            chk = 1;
        }
	    while(a>1){
            if((inpu0==0) || (inpu1==0)) break;
	        if(a % inpu1 >= 1){
	            printf("Boring!\n");
	            chk = 1;
	            break;
	        }
	        arr[i] = a/inpu1;
	        a = arr[i];
	        i++;
	    }
	    if(chk == 0){
	        for(j=0;j<200;j++){
	            if(arr[j]>=1){
	                if(arr[j] == 1){
	                    printf("1\n");
	                    break;
	                }
	                printf("%d", arr[j]);
	                printf(" ");
	            }
	        }
	    }
	}
    return(0);
}
