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

    // --- �P�_�̤j�� (Maximum) ---

    // ���]�Ĥ@�ӼƬO�̤j��
    max = num1;

    // �ˬd�ĤG�ӼƬO�_��j
    if (num2 > max) 
    {
        max = num2;
    }

    // �ˬd�ĤT�ӼƬO�_��j
    if (num3 > max) 
    {
        max = num3;
    }

    // --- �P�_�̤p�� (Minimum) ---

    // ���]�Ĥ@�ӼƬO�̤p��
    min = num1;

    // �ˬd�ĤG�ӼƬO�_��p
    if (num2 < min) 
    {
        min = num2;
    }

    // �ˬd�ĤT�ӼƬO�_��p
    if (num3 < min) 
    {
        min = num3;
    }

    // 3. ��X���G
    printf("\n�z��J���T�ӼƬO�G%d, %d, %d\n", num1, num2, num3);
    printf("�̤j�� (Maximum) �O: %d\n", max);
    printf("�̤p�� (Minimum) �O: %d\n", min);


	return 0;   
}