#include<iostream>
#include<time.h>

using namespace std;

int main() {

	srand(time(NULL));
	int sNum[3], iNum[3];
	int iTry = 0;

	for (int i = 0; i < 3; i++)
		sNum[i] = rand() % 10;

	for (int i = 0; i < 3; i++)
		printf("%d", sNum[i]);

	while (true) {
		int nSet = 0, aSet = 0;

		printf("���� 3�� �Է�(ex:0 0 0) : ");
		for (int i = 0; i < 3; i++) {
			scanf("%d", iNum + i);
			if ( iNum[i] > 10 || iNum[i] < 0) {
				printf("0~9 ������ ���ڸ� �Է��ϼ���.");
				continue;
			}
		}

		for (int i = 0; i < 3; i++) {
			for (int j = i; j < 3; j++) {
				if (iNum[i] == sNum[j]) {
					if (i == j)
						aSet++;
					else nSet++;
				}
			}
		}

		printf("O : %d, �� : %d, �õ� Ƚ�� : %d\n\n", aSet, nSet, ++iTry);
		if (aSet == 3) { 
			printf("���߱� ����!\n");
			break; 
		}
		else if (iTry == 5) break;
		
		continue;
	}
}