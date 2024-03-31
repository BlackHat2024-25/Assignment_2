#include <stdio.h>


int main()
{
    int num, original_num, reminder;
    int n = 0, result = 0;
    

    
    printf("enter a number: ");
    scanf("%d", &num);

    original_num = num;

    // count number of digits

    while (original_num != 0)
    {
    original_num /= 10;
        ++n;
    }

    original_num = num;

    // calculate the sum of nth power of digits

    while (original_num != 0)
    {
        reminder = original_num % 10;
        result = result + reminder*reminder*reminder;
        original_num /= 10;
    }

    if (result == num)
    {
        printf("%d is a Armstrong number.\n", num);
    }
    else
    {
        printf("%d is not an Armstrong number.\n", num);
    }
    
  
  return 0;
}
