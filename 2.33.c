#include <stdio.h>

int main() {
    // �ŧi�ܼƬ� double�A�H�B�z�p�ƩM�f����
    double totalMiles;       // a) �@��Ѫ��`���{��
    double costPerUnit;      // b) �T�o�@����/�[�ڪ�����
    double avgMileage;       // c) �����@����/�[�گ��p�����{��
    double parkingFees;      // d) �@�Ѫ������O
    double tollsPerDay;      // e) �@�Ѫ��L���O

    double fuelConsumed;     // �C�ѻݭn���o�q
    double dailyFuelCost;    // �C�Ѫ��o�O
    double totalDailyCost;   // �C�Ѫ��`��O

    printf("--- �@���`�٭p�⾹�G�C��r�p�����p�� ---\n");

    // 1. Ū���Ҧ���J
    printf("a) �п�J�@��Ѫ��`���{�� (�п�J����): ");
    scanf_s("%lf", &totalMiles);

    printf("b) �п�J�C����/�[�ڨT�o������(*����[��=3.9���ɡB�^��[��=4.5����): ");
    scanf_s("%lf", &costPerUnit);

    printf("c) �п�J�����C����/�[�گ��p�����{��: ");
    scanf_s("%lf", &avgMileage);

    printf("d) �п�J�@�Ѫ������O: ");
    scanf_s("%lf", &parkingFees);

    printf("e) �п�J�@�Ѫ��L���O: ");
    scanf_s("%lf", &tollsPerDay);

    // --- 2. �֤߭p�� ---

    // �ˬd�o�ӬO�_���s�A�קK���H�s���~
    if (avgMileage <= 0) {
        printf("\n���~�G�������{�ƥ����j��s�C\n");
        return 1;
    }

    // �B�J 1: �p��C�ѻݭn���o�q (����)
    fuelConsumed = totalMiles / avgMileage;

    // �B�J 2: �p��C�Ѫ��o�O
    dailyFuelCost = fuelConsumed * costPerUnit;

    // �B�J 3: �p��C���`��O
    totalDailyCost = dailyFuelCost + parkingFees + tollsPerDay;

    // --- 3. ��X���G ---
    printf("\n--- �C��r�p�������� ---\n");
    printf("�`�o�q����:           %.2f ��� (����)\n", fuelConsumed);
    printf("�C��o�O:             $%.2f\n", dailyFuelCost);
    printf("�C��T�w�O�� (�����O+�L���O): $%.2f\n", parkingFees + tollsPerDay);
    printf("----------------------------------\n");
    printf("�z�C�Ѷ}���h�u�@���`��O�O:  $%.2f\n", totalDailyCost);
    printf("----------------------------------\n");
    printf("�z�L�@���A�z�i�H���p�`�ٳo����O�A�æP�ɴ�ֺұƩ�M��q����C\n");

    return 0;
}