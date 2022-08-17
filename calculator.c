#include <stdio.h>
#include <stdlib.h>
int main() {
        printf("\n##################\n#-CALCULATOR-#\n##################");
menu:   printf("\nPlease enter the action you want to do: \n1. ADDITION \n2. SUBTRACTION \n3. MULTIPLICATION \n4. DIVISION \n5. SQUARE ROOT \n6. EXPONENTIATION\n0. EXIT\n"); 
int oprt;
scanf("%d",&oprt);
float x, y;
switch (oprt) {
    case 0: goto exit;
    case 1: printf("Enter the numbers you want to sum:\n");
    scanf("%f%f",&x,&y);
    printf("Result = %.3f\n\n\n",x+y);
    break;
    case 2: printf("Please enter the numbers you want to subtract in order.:\n");
    scanf ("%f%f",&x,&y);
    printf("Result = %.3f\n\n\n",x-y);
    break;
    case 3: printf("Enter the numbers you want to multiply:\n");
    scanf("%f%f",&x,&y);
    printf("Result = %.5f\n\n\n",x*y);
    break;
    case 4: printf("Enter the number to be divided:\n");
    scanf("%f",&x);
    printf("Enter the number to divide:\n");
    scanf("%f",&y);
    printf("Result = %.5f\n\n\n",x/y);
    break;
    case 5: printf("Enter the number you want to take the square root of:\n");
    scanf("%f",&x);
    float temp, sqrt;
    sqrt = x/2;
    temp = 0;
    while(sqrt!=temp){
        temp=sqrt;
        sqrt=(x/temp+temp)/2;
    }
    printf ("Result = %f\n\n\n",sqrt);
    break;
    case 6: printf("Enter the base and the exponent:\n");
    scanf("%f%f",&x,&y);
    float power=1.0;
    for(int i=1;i<=y;i++){
        power=power*x;
    }
    printf ("Result = %.3f\n\n\n",power);
    break;
    default: printf("Please enter a number between 1-6\n\n\n");
 }
choice:
printf("---Enter '1' to continue, '0' to turn off---\n");
int choice;
scanf("%d",&choice);
    switch(choice) {                                                      
    case 0: goto exit;break;
    case 1: goto menu; break;
    default: printf("Please enter a valid number!\n");
    goto choice;
    }
goto menu;
exit:
    printf("\nThanks for using the calculator.\n\n");
    return 0;
}
