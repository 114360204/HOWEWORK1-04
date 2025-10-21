#include <stdlib.h>
#include <stdio.h>

int main(void){

    printf("Enter three integers, and I will tell you\n");
    printf("the relationships they : \n");


    int num1;
    int num2;
    int num3;
    int max;
    int min;

    printf("Enter first integer: ");
    scanf_s("%d", &num1);
    printf("Enter second integer: ");
    scanf_s("%d", &num2);
    printf("Enter third integer: ");
    scanf_s("%d", &num3);

    // --- 耞程 (Maximum) ---

    // 安砞材计琌程
    max = num1;

    // 浪琩材计琌
    if (num2 > max) 
    {
        max = num2;
    }

    // 浪琩材计琌
    if (num3 > max) 
    {
        max = num3;
    }

    // --- 耞程 (Minimum) ---

    // 安砞材计琌程
    min = num1;

    // 浪琩材计琌
    if (num2 < min) 
    {
        min = num2;
    }

    // 浪琩材计琌
    if (num3 < min) 
    {
        min = num3;
    }

    // 3. 块挡狦
    printf("\n眤块计琌%d, %d, %d\n", num1, num2, num3);
    printf("程 (Maximum) 琌: %d\n", max);
    printf("程 (Minimum) 琌: %d\n", min);


	return 0;   
}