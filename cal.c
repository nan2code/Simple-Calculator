#include <stdio.h>
#include <math.h>

int main(){
    int num1, num2, choice;
    double result;

    printf("WELCOME TO SIMPLE CALCULATOR\n");
    printf("----Menu----\n");
    printf("1. ADD(+)\n");
    printf("2. SUBSTRACT(-)\n");
    printf("3. MULTIPLY(*)\n");
    printf("4. DIVISION(/)\n");
    printf("5. POWER(^)\n");
    printf("6. MODULUS(%)\n");

    printf("\nEnter your choice! ^-^ (1-6):");
    scanf("%d", &choice);

    printf("ENTER TWO NUMBERS:");
    scanf("%d %d", &num1, &num2);

    switch(choice){
       case 1: result= num1+ num2;
               printf("Result: %.2lf\n", result);
               break;
       case 2: result= num1-num2;
               printf("Result: %.2lf\n", result);
               break;
       case 3: result= num1*num2;
               printf("Result: %.2lf\n", result);
               break;
       case 4: if(num2 !=0){
                  result= (double)num1/num2;
                  printf("result: %.2lf\n", result);
              }else {
                  printf("UNDEFINED");
               }
               break;
       case 5: result= pow(num1,num2);
               printf("Result: %.2lf\n", result);
               break;
       case 6: result= num1%num2;
               printf("Result: %.2lf\n", result);
               break;
       default: printf("INVALID CHOICE. \n");
                break;

    }

    return 0;

}
