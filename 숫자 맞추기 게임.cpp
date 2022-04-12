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

		printf("숫자 3개 입력(ex:0 0 0) : ");
		for (int i = 0; i < 3; i++) {
			scanf("%d", iNum + i);
			if ( iNum[i] > 10 || iNum[i] < 0) {
				printf("0~9 사이의 숫자를 입력하세요.");
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

		printf("O : %d, △ : %d, 시도 횟수 : %d\n\n", aSet, nSet, ++iTry);
		if (aSet == 3) { 
			printf("맞추기 성공!\n");
			break; 
		}
		else if (iTry == 5) break;
		
		continue;
	}
}