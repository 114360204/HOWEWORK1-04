#include <stdio.h>

int main() {
    double weightInKilograms; // �魫�]����^�A�ϥ� double �����p���I
    double heightInMeters;    // �����]���ء^�A�ϥ� double �����p���I 
    double bmi;               // �����q���� (BMI)�A�ϥ� double �x�s

    // ���ܨϥΪ̿�J
    printf("--- �����q���� (BMI) �p�⾹ (�ϥΤp��) ---\n");
    printf("�п�J�z���魫 (����A�Ҧp 55.5): ");

    // Ū���魫 (����)
    if (scanf_s("%lf", &weightInKilograms) != 1 || weightInKilograms <= 0) {
        printf("��J���~�C�п�J�@�Ӧ��Ī������魫�C\n");
        return 1;
    }

    printf("�п�J�z������ (���ءA�Ҧp 1.61): ");

    // Ū������ (����)
    if (scanf_s("%lf", &heightInMeters) != 1 || heightInMeters <= 0) {
        printf("��J���~�C�п�J�@�Ӧ��Ī����ƨ����C\n");
        return 1;
    }

    // --- BMI �p�� ---
    // ����: BMI = weightInKilograms / (heightInMeters * heightInMeters)
    // �ѩ�Ҧ��ܼƳ��O double�A���G�N�|�O��T���B�I�ơC
    bmi = weightInKilograms / (heightInMeters * heightInMeters);

    // ��X���G
    printf("\n�z���魫: %.2f ����, ����: %.2f ����\n", weightInKilograms, heightInMeters);
    printf("�z�� BMI ��T���G�O: %.2f\n", bmi); // ��X BMI ��p���I����

    // ��X BMI ������T
    printf("\n--- BMI �ȵ����з� ---\n");
    printf(" (�魫�L��):              �֩� 18.5\n");
    printf(" (���`):                  ���� 18.5 �M 24.9\n");
    printf(" (�魫�L��):              ���� 25 �M 29.9\n");
    printf(" (�έD):                  30 �Χ�j\n");

    return 0;
}