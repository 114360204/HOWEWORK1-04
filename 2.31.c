#include <stdio.h>

int main(void) {
    int i;  // �j���ܼ�

    // �L�X���Y
    printf("�Ʀr\t����\t�ߤ�\n\n");
    

    // �ϥ� for �j��q 0 �]�� 10
    for (i = 0; i <= 10; i++) {
        printf("%d\t%d\t%d\n", i, i * i, i * i * i);
    }

    return 0;
}
