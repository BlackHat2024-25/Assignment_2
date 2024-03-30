#include<stdio.h>

int main(){

int days, choice;
int count = 1;
    while (count <= 5){

printf("Enter number of days:");
scanf("%d", &days);

printf("Choose conversion\n");
printf("1. Second\n");
printf("2. Menutes\n");
printf("3. Hour\n");
printf("4. Week\n");
printf("5. Months\n");

printf("enter your choice : ");
scanf("%d", &choice);
printf("\n");



switch(choice){

    case 1:
    printf("%d days is equal to : %d seconds\n", days, days * 24 * 60 * 60);
    printf("\n");
    break;

    case 2:
    printf("%d days is equal to : %d menutes\n", days, days * 24 * 60);
    printf("\n");
    break;

    case 3:
    printf("%d days is equal to : %d hours\n", days, days * 24);
    printf("\n");
    break;

    case 4:
    printf("%d days is equal to : %d weeks\n", days, days / 7);
    printf("\n");
    break;

    case 5:
    printf("%d days is equal to : %d Months\n", days, days / 30);
    printf("\n");
    break;

    default:
    printf("Invalid choice");
}
count += 1;
}
return 0;


}