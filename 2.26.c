#include <stdio.h>

int main(void) {
    int num1, num2;

    // ���ܨϥΪ̿�J��Ӿ��
    printf("�п�J��Ӿ�ơA�H�ťդ��j: ");
    scanf_s("%d %d", &num1, &num2);

    // �ˬd���ƬO�_�� 0
    if (num2 == 0) {
        printf("���~�G�ĤG�ӼƤ��ର 0�C\n");
    }
    else {
        // �ϥΨ��l�ƹB��l�P�_�������Y
        if (num1 % num2 == 0) {
            printf("%d �O %d �����ơC\n", num1, num2);
        }
        else {
            printf("%d ���O %d �����ơC\n", num1, num2);
        }
    }

    return 0;
}
