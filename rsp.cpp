#include<iostream>
#include<time.h>

using namespace std;

enum SRP {
	SRP_S = 1,
	SRP_R,
	SRP_P,
	SRP_END
};

int main() {
	// 콘솔창 화면을 개끗히 지워준다.
	system("cls");

	// 난수 테이블 생성
	srand(time(NULL));	//(unsigned int)time(0)

	int iPlayer;

	int iComputer;
	while (true) {
		cout << "1 - 가위" << endl;
		cout << "2 - 바위" << endl;
		cout << "3 - 보" << endl;
		cout << "4 - 종료" << endl;
		cout << "메뉴 선택 : ";
		cin >> iPlayer;
		if (iPlayer<SRP_S || iPlayer>SRP_END) {
			cout << "잘못된 값을 입력하였습니다." << endl;
			// 일시정지
			system("pause");
			continue;
		}
		else if(iPlayer == SRP_END){
			break;
		}
		// 봇이 선택을 한다.
		iComputer = rand() % SRP_P + SRP_S;

		switch (iPlayer) {
		case SRP_S:
			cout << "플레이어 : 가위" << endl;
			break;
		case SRP_R:
			cout << "플레이어 : 바위" << endl;
			break;
		case SRP_P:
			cout << "플레이어 : 보" << endl;
			break;
		}

		switch (iComputer) {
		case SRP_S: 
			cout << "컴퓨터 : 가위" << endl;
			break;
		case SRP_R:
			cout << "컴퓨터 : 바위" << endl;
			break;
		case SRP_P:
			cout << "컴퓨터 : 보" << endl;
			break;
		}

		int iWin = iPlayer - iComputer;
		if (iWin == 0)
			cout << "비겼습니다." << endl;
		else if (iWin==-2 || iWin==1)
			cout << "이겼습니다!" << endl;
		else
			cout << "졌습니다..." << endl;

		system("pause");
	}
	return 0;
}