#include<iostream>
#include<time.h>

using namespace std;

int main() {

	srand((unsigned int)time(0));
	int sNum[3], iNum[3];
	int iTry = 0;

	// ������ �� 3�� ����
	for (int i = 0; i < 3; i++)
		sNum[i] = rand() % 10;
	
	// ������ ������ �� Ȯ��
	//for (int i = 0; i < 3; i++)
	//	printf("%d\n", sNum[i]);

	// ���� ������
	while (true) {
		int nSet = 0, aSet = 0;

		printf("����(0~9) 3�� �Է�(ex:0 0 0) : ");
		// ���� �Է�
		for (int i = 0; i < 3; i++) {
			scanf("%d", iNum + i);
		}

		// �ڸ��� ���� ��� ���߸� aSet+1, ���ڸ� ���߸� nSet+1
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (iNum[i] == sNum[j]) {
					if (i == j) aSet++;
					else nSet++;
				}
			}
		}

		// ���� ���� ���
		printf("�� : %d, �� : %d, �õ� Ƚ�� : %d\n\n", aSet, nSet, ++iTry);

		// ���߱� ���� �� ���
		if (aSet == 3) { 
			printf("���߱� ����!\n");
			break; 
		}
		// 5�� ��� �������� �� ���
		else if (iTry == 5) {
			printf("���߱� ����...\n");
			break;
		}
		
		continue;
	}
}