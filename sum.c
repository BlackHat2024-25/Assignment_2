#include <stdio.h>
int main()
{

    int n, i, sum;

    printf("first natural number is :\n");
    scanf("%d", &n);

    for (i = 1; i <= n; i++)
    {
      printf("%d\n",i);
    }

    sum = n * (n + 1)/2;

    printf("sum of %d natural number is : %d",n,sum);
    printf("\n");
    return 0;

    
    
}
    


    
