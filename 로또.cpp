#include<iostream>
#include<time.h>

using namespace std;

void swap(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	system("cls");
	srand(time(NULL));

	int iLotto[45] = {};

	// 
	for (int i = 0; i < 45; i++) {
		iLotto[i] = i+1;
	}


	// swap으로 iLotto안의 숫자를 섞어준다.
	int idx1, idx2;
	for(int i = 0; i < 100; i++) {
		idx1 = rand() % 45;
		idx2 = rand() % 45;
		swap(&iLotto[idx1], &iLotto[idx2]);
	}
	
	//for (int i = 0; i < 45; i++) {
	//	cout << iLotto[i] << endl;
	//}

	int i;
	for (i = 0; i < 6; i++) {
		cout << "당첨 번호 : " << iLotto[i] << endl;
	}

	for (; i < 8; i++) {
		cout << "보너스 번호 : " << iLotto[i] << endl;
	}

	return 0;
}