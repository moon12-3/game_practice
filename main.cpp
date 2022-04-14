#include<iostream>
#include<time.h>
// console input output 헤더파일이다. 콘솔창에서 입출력 하는 기능들을 제공해주는 헤더파일이다.
#include<conio.h>

using namespace std;

inline void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	srand(time(NULL));

	int iNumber[25] = {};
	int staridx = 24;

	for (int i = 0; i < 24; i++) {
		iNumber[i] = i + 1;
	}
	// 가장 마지막 칸은 공백으로 비워둔다. 공백을 의미하는 값으로 특수한 값을 사용할건데 INT_MAX를 사용. 
	// INT_MAX는 이미 정의된 값으로 int로 표현할 수 있는 최대값이다.
	iNumber[24] = INT_MAX;

	// 마지막 공백을 제외하고 1 ~ 24 까지의 숫자만 섞어준다.
	int idx1, idx2;
	for (int i = 0; i < 24; i++) {
		idx1 = rand() % 24;
		idx2 = rand() % 24;
		swap(iNumber[idx1], iNumber[idx2]);
	}

	while (true) {
		system("cls");
		// i for문이 세로줄을 의미
		for (int i = 0; i < 5; i++) {
			// j for문이 가로칸을 의미
			for (int j = 0; j < 5; j++) {
				// 줄번호 * 가로개수 + 칸번호
				if (iNumber[i * 5 + j] == INT_MAX) cout << "*\t";
				else cout << iNumber[i * 5 + j] << "\t";

			}
			cout << endl;
		}

		// 숫자를 모두 맞추었는지 체크
		bool bWin = true;

		for (int i = 0; i < 25; i++) {
			if (iNumber[i] != i + 1) {
				bWin = false;
			}
		}

		if (bWin) {
			cout << "정답입니다!" << endl;
			break;
		}

		cout << "w : 위 a : 왼쪽  s : 아래 d : 오른쪽 q : 종료 ";
		// _getch()함수는 문자 1개를 입력받는 함수이다. 이 함수는 Enter를 치지 않더라도 문자를 누르는 순간 바로 그 문자를 반환하고 종료한다.
		char	clnput = _getch();

		if (clnput == 'q' || clnput == 'Q')
			break;
	
		switch (clnput) {
		case 'w': 
		case 'W':
			if (staridx > 4) {
				swap(iNumber + staridx, iNumber + (staridx - 5));
				staridx = staridx - 5;
			}
			break;

		case'a':
		case'A':
			if (staridx % 5 != 0) {
				swap(iNumber + staridx, iNumber + (staridx - 1));
				staridx = staridx - 1;
			}
			break;

		case 's':
		case 'S':
			if (staridx < 20) {
				swap(iNumber + staridx, iNumber + (staridx + 5));
				staridx = staridx + 5;
			}
			break;
		case 'd':
		case 'D':
			if (staridx % 5 != 4) {
				swap(iNumber + staridx, iNumber + (staridx + 1));
				staridx = staridx + 1;
			}
			break;
		}
	}

	cout << endl << "게임을 종료합니다." <<endl;


	return 0;
}