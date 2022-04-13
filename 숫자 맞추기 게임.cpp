#include<iostream>
#include<time.h>

using namespace std;

int main() {

	srand((unsigned int)time(0));
	int sNum[3], iNum[3];
	int iTry = 0;

	// 임의의 수 3개 생성
	for (int i = 0; i < 3; i++)
		sNum[i] = rand() % 10;
	
	// 생성된 임의의 수 확인
	//for (int i = 0; i < 3; i++)
	//	printf("%d\n", sNum[i]);

	// 게임 돌리기
	while (true) {
		int nSet = 0, aSet = 0;

		printf("숫자(0~9) 3개 입력(ex:0 0 0) : ");
		// 숫자 입력
		for (int i = 0; i < 3; i++) {
			scanf("%d", iNum + i);
		}

		// 자리와 숫자 모두 맞추면 aSet+1, 숫자만 맞추면 nSet+1
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 3; j++) {
				if (iNum[i] == sNum[j]) {
					if (i == j) aSet++;
					else nSet++;
				}
			}
		}

		// 맞춘 개수 출력
		printf("○ : %d, △ : %d, 시도 횟수 : %d\n\n", aSet, nSet, ++iTry);

		// 맞추기 성공 시 출력
		if (aSet == 3) { 
			printf("맞추기 성공!\n");
			break; 
		}
		// 5번 모두 실패했을 시 출력
		else if (iTry == 5) {
			printf("맞추기 실패...\n");
			break;
		}
		
		continue;
	}
}