#include<iostream>

using namespace std;

// ����ü
enum NUM {
	NUM_0 = 10,	// �ƹ��͵� �ο� x�� 0���� 1�� ���ʷ� ���� �ο�
	NUM_1,
	NUM_2 = 0x0010,
	NUM_3
};

#define NUM_4	4

int main() {
	int iNumber;
	cout << "�� �Է� : ";
	cin >> iNumber;
	switch (iNumber) {
	case NUM_0: 
		cout << "�Է��� ���ڴ� 0�Դϴ�.";
		break;
	case NUM_1 :
		cout << "�Է��� ���ڴ� 1�Դϴ�.";
		break;
	case NUM_2:
		cout << "�Է��� ���ڴ� 2�Դϴ�.";
		break;
	case NUM_3:
		cout << "�Է��� ���ڴ� 3�Դϴ�.";
		break;
	case NUM_4:
		cout << "�Է��� ���ڴ� 4�Դϴ�.";
		break;
	default :
		break;
	}

	// ����ü Ÿ���� ������ ��. ũ��� 4byte
	NUM eNum = (NUM)10;

	cout << sizeof(eNum) << endl;
	cout << typeid(eNum).name() << endl;
	cout << eNum << endl;
	//typeid(Ÿ�� or ����).name() �� �ϰ� �Ǹ� typeid �ȿ� �� Ÿ�� Ȥ�� ������ Ÿ���� ���ڿ��� ��ȯ���ش�.

	return 0;
}