#include<stdio.h>

int binaryToDecimal(int binary){

    int decimal = 0, base = 1, reminder;

    while (binary > 0)
    {
        reminder = binary % 10;
        decimal += reminder * base;

        binary /= 10;
        base *=2;
    }
    return decimal;
    
}

int main(){

    int binary;

    printf("Enter binary number: ");
    scanf("%d", &binary);

    printf("Decimal number is: %d\n", binaryToDecimal(binary));

    return 0;
}