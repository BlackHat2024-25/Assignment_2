#include<stdio.h>

int main(){
    int i,a = 0,b = 1,c,n;

    printf("enter the number for fibonacci series\n");
    scanf("%d", &n);

    printf("\n\nFibonacci Series\n\n");
    printf("%d  %d",a,b);

    for ( i = 0; i < n; i++)
    {
        c = a + b;
        a = b;
        b = c;

        printf("  %d", c);
    }
    return 0;
    

}