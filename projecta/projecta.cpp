/*!
* @PROJECTA.cpp
* @brief STL, NameSpace, define use
*/
#include <iostream>
#include <Windows.h>

using namespace std;

#define msl(x) cout << x << endl
#define ms(x) cout << x;

// 전역변수
int secret_number = 0000;
int secet_number_change = 0;
int menu_input = 0;

int main()
{
	while (true) {
		system("cls");

		msl("========== Mune ==========");
		msl("[ 1 ] 관리자 로그인(초기 비밀번호 : 0000)");
		msl("[ 2 ] 관리자 비밀번호 변경하기");
		msl("[ 3 ] 종료");
		ms("Mune Select = ");

		cin >> menu_input;

		switch (menu_input) {
		case 1:
		{
			system("cls");

			msl("========== 관리자 로그인 ==========");
			ms("비밀번호 입력 = ");

			int input_secret_number = 0;
			cin >> input_secret_number;

			if (input_secret_number == secret_number) {
				msl("올바른 비밀번호 입니다.");
				Sleep(3000);
			}
			else
			{
				msl("비밀번호가 맞지 않습니다.");
				Sleep(3000);
			}
			break;
		}
		case 2:
		{
			system("cls");

			msl("========== 관리자 로그인 ==========");
			ms("비밀번호 입력 = ");

			int input_secret_number = 0;
			cin >> input_secret_number;

			if (input_secret_number == secret_number) {
				msl("올바른 비밀번호 입니다.");
				Sleep(3000);
			}
			else
			{
				msl("비밀번호가 맞지 않습니다.");
				Sleep(3000);
			}
			break;
		}
		default:
			msl("잘못된 선택입니다. 다시 시도하세요.");
			Sleep(3000);
			break;
		}
	}
}