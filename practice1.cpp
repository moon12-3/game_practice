#include<iostream>

using namespace std;

// 열거체
enum NUM {
	NUM_0 = 10,	// 아무것도 부여 x시 0부터 1씩 차례로 값을 부여
	NUM_1,
	NUM_2 = 0x0010,
	NUM_3
};

#define NUM_4	4

int main() {
	int iNumber;
	cout << "값 입력 : ";
	cin >> iNumber;
	switch (iNumber) {
	case NUM_0: 
		cout << "입력한 숫자는 0입니다.";
		break;
	case NUM_1 :
		cout << "입력한 숫자는 1입니다.";
		break;
	case NUM_2:
		cout << "입력한 숫자는 2입니다.";
		break;
	case NUM_3:
		cout << "입력한 숫자는 3입니다.";
		break;
	case NUM_4:
		cout << "입력한 숫자는 4입니다.";
		break;
	default :
		break;
	}

	// 열거체 타입의 변수가 됨. 크기는 4byte
	NUM eNum = (NUM)10;

	cout << sizeof(eNum) << endl;
	cout << typeid(eNum).name() << endl;
	cout << eNum << endl;
	//typeid(타입 or 변수).name() 을 하게 되면 typeid 안에 들어간 타입 혹은 변수의 타입을 문자열로 반환해준다.

	return 0;
}