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
	// �ܼ�â ȭ���� ������ �����ش�.
	system("cls");

	// ���� ���̺� ����
	srand(time(NULL));	//(unsigned int)time(0)

	int iPlayer;

	int iComputer;
	while (true) {
		cout << "1 - ����" << endl;
		cout << "2 - ����" << endl;
		cout << "3 - ��" << endl;
		cout << "4 - ����" << endl;
		cout << "�޴� ���� : ";
		cin >> iPlayer;
		if (iPlayer<SRP_S || iPlayer>SRP_END) {
			cout << "�߸��� ���� �Է��Ͽ����ϴ�." << endl;
			// �Ͻ�����
			system("pause");
			continue;
		}
		else if(iPlayer == SRP_END){
			break;
		}
		// ���� ������ �Ѵ�.
		iComputer = rand() % SRP_P + SRP_S;

		switch (iPlayer) {
		case SRP_S:
			cout << "�÷��̾� : ����" << endl;
			break;
		case SRP_R:
			cout << "�÷��̾� : ����" << endl;
			break;
		case SRP_P:
			cout << "�÷��̾� : ��" << endl;
			break;
		}

		switch (iComputer) {
		case SRP_S: 
			cout << "��ǻ�� : ����" << endl;
			break;
		case SRP_R:
			cout << "��ǻ�� : ����" << endl;
			break;
		case SRP_P:
			cout << "��ǻ�� : ��" << endl;
			break;
		}

		int iWin = iPlayer - iComputer;
		if (iWin == 0)
			cout << "�����ϴ�." << endl;
		else if (iWin==-2 || iWin==1)
			cout << "�̰���ϴ�!" << endl;
		else
			cout << "�����ϴ�..." << endl;

		system("pause");
	}
	return 0;
}