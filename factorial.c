#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, i;
    long long fact = 1;

    if (argc != 2)
    {
        printf("Usage: %s <number>\n", argv[0]);
        return 1;
    }

    n = atoi(argv[1]);   // Convert string to integer
    if(n<0){
        printf("-ve numbers doesn't have factorial");
        return 0;
    }
    else{
    for (i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    printf("Factorial of %d = %lld\n", n, fact);
    for(i=0;i<argc;i++){
        printf("\nargc = %d argv[%d] = %s\n",argc,i,argv[i]);
    }
    }

    return 0;
}