#include <stdio.h>

int main(void) {
    int number;

    // ���ܨϥΪ̿�J�@�Ӿ��
    printf("�п�J�@�Ӿ��: ");
    scanf_s("%d", &number);

    // �P�_�O�_�Ʃΰ���
    if (number % 2 == 0) {
        printf("%d �O���ơC\n", number);
    }
    else {
        printf("%d �O�_�ơC\n", number);
    }

    return 0;
}
