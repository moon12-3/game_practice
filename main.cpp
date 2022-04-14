#include<iostream>
#include<time.h>
// console input output ��������̴�. �ܼ�â���� ����� �ϴ� ��ɵ��� �������ִ� ��������̴�.
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
	// ���� ������ ĭ�� �������� ����д�. ������ �ǹ��ϴ� ������ Ư���� ���� ����Ұǵ� INT_MAX�� ���. 
	// INT_MAX�� �̹� ���ǵ� ������ int�� ǥ���� �� �ִ� �ִ밪�̴�.
	iNumber[24] = INT_MAX;

	// ������ ������ �����ϰ� 1 ~ 24 ������ ���ڸ� �����ش�.
	int idx1, idx2;
	for (int i = 0; i < 24; i++) {
		idx1 = rand() % 24;
		idx2 = rand() % 24;
		swap(iNumber[idx1], iNumber[idx2]);
	}

	while (true) {
		system("cls");
		// i for���� �������� �ǹ�
		for (int i = 0; i < 5; i++) {
			// j for���� ����ĭ�� �ǹ�
			for (int j = 0; j < 5; j++) {
				// �ٹ�ȣ * ���ΰ��� + ĭ��ȣ
				if (iNumber[i * 5 + j] == INT_MAX) cout << "*\t";
				else cout << iNumber[i * 5 + j] << "\t";

			}
			cout << endl;
		}

		// ���ڸ� ��� ���߾����� üũ
		bool bWin = true;

		for (int i = 0; i < 25; i++) {
			if (iNumber[i] != i + 1) {
				bWin = false;
			}
		}

		if (bWin) {
			cout << "�����Դϴ�!" << endl;
			break;
		}

		cout << "w : �� a : ����  s : �Ʒ� d : ������ q : ���� ";
		// _getch()�Լ��� ���� 1���� �Է¹޴� �Լ��̴�. �� �Լ��� Enter�� ġ�� �ʴ��� ���ڸ� ������ ���� �ٷ� �� ���ڸ� ��ȯ�ϰ� �����Ѵ�.
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

	cout << endl << "������ �����մϴ�." <<endl;


	return 0;
}